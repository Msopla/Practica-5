#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct Usuario {
    string nombre;
    string apellido;
    string email;
    string password;
};

class UserManager {
private:
    vector<Usuario> usuarios;
    const string ARCHIVO_DATOS = "usuarios.txt";

public:
    UserManager() {
        CargarUsuarios();
    }

    void CargarUsuarios() {
        usuarios.clear();
        ifstream archivo(ARCHIVO_DATOS);

        if (!archivo.is_open()) {
            return; // El archivo no existe aún
        }

        string linea;
        while (getline(archivo, linea)) {
            if (linea.empty()) continue;

            // Parsear: nombre|apellido|email|password
            stringstream ss(linea);
            string nombre, apellido, email, password;

            getline(ss, nombre, '|');
            getline(ss, apellido, '|');
            getline(ss, email, '|');
            getline(ss, password, '|');

            usuarios.push_back({ nombre, apellido, email, password });
        }

        archivo.close();
    }

    bool RegistrarUsuario(const string& nombre, const string& apellido, 
                         const string& email, const string& password) {
        // Verificar que el email no exista
        for (const auto& usuario : usuarios) {
            if (usuario.email == email) {
                return false; // Email ya existe
            }
        }

        // Agregar nuevo usuario
        usuarios.push_back({ nombre, apellido, email, password });

        // Guardar en archivo
        return GuardarUsuarios();
    }

    bool AutenticarUsuario(const string& email, const string& password) {
        for (const auto& usuario : usuarios) {
            if (usuario.email == email && usuario.password == password) {
                return true;
            }
        }
        return false;
    }

    Usuario* ObtenerUsuario(const string& email) {
        for (auto& usuario : usuarios) {
            if (usuario.email == email) {
                return &usuario;
            }
        }
        return nullptr;
    }

private:
    bool GuardarUsuarios() {
        ofstream archivo(ARCHIVO_DATOS);

        if (!archivo.is_open()) {
            return false;
        }

        for (const auto& usuario : usuarios) {
            archivo << usuario.nombre << "|"
                    << usuario.apellido << "|"
                    << usuario.email << "|"
                    << usuario.password << "\n";
        }

        archivo.close();
        return true;
    }
};
