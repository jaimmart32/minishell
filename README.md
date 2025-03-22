# 🐚 Minishell

**Minishell** es una implementación personalizada de un *shell* de Unix desarrollada en **C** como parte del currículo de la escuela 42. Este proyecto reproduce el comportamiento básico de una terminal, permitiendo ejecutar comandos, gestionar procesos, redirecciones y más. Esta basado en Bash.

## 🚀 Funcionalidades principales

- ✅ Ejecución de comandos con rutas absolutas y relativas  
- ✅ Soporte para múltiples argumentos por comando  
- ✅ **Pipes** (`|`) entre múltiples comandos  
- ✅ Redirecciones:
  - Entrada (`<`)
  - Salida (`>`, `>>`)
  - *Heredocs* (`<<`)
- ✅ Expansión de variables de entorno (`$VAR`) y del carácter `~`  
- ✅ Implementación de comandos *built-in*:
  - `cd`
  - `echo`
  - `env`
  - `exit`
  - `export`
  - `pwd`
  - `unset`
- ✅ Manejo de errores y códigos de salida estándar  
- ✅ Soporte para comillas simples y dobles, y *escaping* de caracteres  
- ✅ Gestión de señales como `Ctrl+C` y `Ctrl+\`  
- ✅ Lectura interactiva con `readline` y gestión del historial de comandos

## 🧠 Tecnologías y conceptos utilizados

- Lenguaje C
- Programación de procesos (`fork`, `execve`, `wait`)
- Manejo de señales (`signal`, `sigaction`)
- Manipulación de strings y memoria dinámica
- Estructuras de datos y parsing de entrada
- Librería `readline` para entrada de usuario
