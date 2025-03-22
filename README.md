🎯 Minishell
Descripción:
Minishell es una implementación personalizada de un shell Unix, desarrollada en C. Reproduce el comportamiento de una terminal básica, permitiendo ejecutar comandos, gestionar procesos y manejar redirecciones, entre otras funcionalidades.

Tecnologías: C, manejo de procesos (fork, execve), señales (signal, sigaction), manejo de memoria dinámica, estructuras de datos.

Funcionalidades clave:

✅ Ejecución de comandos con rutas absolutas y relativas
✅ Comandos con múltiples argumentos
✅ Pipes (|) entre múltiples comandos
✅ Redirecciones: entrada (<), salida (>), y heredocs (<<)
✅ Variables de entorno ($VAR) y expansión del carácter ~
✅ Implementación de funciones built-in (cd, echo, env, exit, export, pwd, unset)
✅ Manejo de errores y códigos de salida estándar
✅ Manejo correcto de comillas (' y ") y escaping
✅ Captura y gestión de señales como Ctrl+C y Ctrl+\
✅ Lectura continua con readline y gestión del historial
