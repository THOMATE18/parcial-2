# Parcial 2 – Desarrollo de Software II  
## Proyecto: API de Tareas – “La Uno”

# juan diego amador carvajal 

---

## Descripción
Este proyecto consiste en una API REST para la gestión de tareas, desarrollada con Node.js y Express.

La aplicación permite crear, listar, actualizar, eliminar y consultar tareas vencidas.  
Para el almacenamiento se usa una estructura en memoria, lo que facilita la ejecución sin necesidad de una base de datos externa.

---

## Arquitectura

El sistema sigue el patrón de arquitectura limpia,  
organizando el código en capas bien separadas para mantener la responsabilidad de cada módulo clara.

Estructura:

src/
├── controller/  Maneja las peticiones HTTP
├── service/  Contiene la lógica de negocio
├── repository/ Encapsula el acceso a los datos
├── model/  Define la estructura de una tarea
├── dto/  Valida los datos de entrada
├── routes/ Define las rutas de la API
└── app.js/ Configura Express y registra las rutas


# Controller
Recibe las solicitudes del cliente y llama a las funciones del servicio.  
No contiene lógica de negocio.

# Service
Orquesta el flujo del sistema: valida, crea, actualiza o elimina tareas usando el repository.

# Repository
Maneja el almacenamiento de datos (actualmente en un arreglo en memoria).  
Si se quisiera usar una base de datos como MongoDB o SQLite, solo habría que modificar esta capa.

# Model
Define la clase `Task` con las propiedades `id`, `title`, `description`, `status` y `dueDate`.

# DTO
Filtra y da formato a los datos que llegan del cliente antes de ser enviados al service.


