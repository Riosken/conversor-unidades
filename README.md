# Conversor de Unidades — Trabajo Colaborativo y Control de Versiones

Proyecto grupal desarrollado para la tarea de **Trabajo Colaborativo y Control de Versiones**. El programa es un conversor de unidades escrito en C que permite convertir temperaturas (Celsius ↔ Fahrenheit) y longitudes (Metros ↔ Pies) mediante un menú interactivo por consola.

## Integrantes

- Eduardo (rama `rama-eduardo`): módulo de conversión de temperatura.
- Yales (rama `rama-Yales`): módulo de conversión de longitud.

## Compilación y ejecución

```bash
gcc -Wall -o conversor conversor.c
./conversor
```

## Flujo de trabajo seguido

1. **Creación del repositorio.** Se creó este repositorio en GitHub con el archivo base `conversor.c` (solo el menú y la opción de salir) y este `README.md` en la rama `main`. Se agregó a la segunda integrante como colaboradora con permisos de escritura.

2. **Creación de ramas individuales.** Cada integrante creó su propia rama a partir de `main`:
   - `rama-eduardo` para la funcionalidad de conversión de temperatura.
   - `rama-Yales` para la funcionalidad de conversión de longitud.

3. **Commits individuales.** Cada integrante realizó al menos dos commits en su rama:
   - Eduardo: (1) agregar conversión de Celsius a Fahrenheit; (2) agregar conversión inversa de Fahrenheit a Celsius.
   - Yales: (1) agregar conversión de Metros a Pies; (2) agregar conversión inversa de Pies a Metros.

4. **Fusión (merge) mediante Pull Requests.**
   - Primero se fusionó `rama-eduardo` en `main` mediante un Pull Request. Esta fusión fue automática, sin conflictos, porque `main` no había cambiado desde que se creó la rama.
   - Después se abrió el Pull Request de `rama-companera` hacia `main`. GitHub reportó un **conflicto de fusión** en `conversor.c`.

## Conflicto encontrado y cómo se resolvió

**Causa del conflicto:** ambas integrantes modificamos las mismas líneas del archivo `conversor.c` (la función `menu()` y el bloque `switch` de `main()`) en ramas paralelas. Cada rama agregó sus propias opciones con los números 1 y 2. Cuando la primera rama ya estaba fusionada en `main`, Git no pudo decidir automáticamente cómo combinar los cambios de la segunda rama sobre esas mismas líneas, y marcó el conflicto con los delimitadores `<<<<<<<`, `=======` y `>>>>>>>`.

**Resolución:** utilizamos el editor de resolución de conflictos de GitHub dentro del Pull Request. Analizamos ambas versiones y decidimos **conservar los dos aportes**, reorganizando el menú:

- Opciones 1 y 2: conversiones de temperatura (aporte de Eduardo).
- Opciones 3 y 4: conversiones de longitud (aporte de la compañera, renumeradas de 1-2 a 3-4).

Se eliminaron los delimitadores de conflicto, se marcó el conflicto como resuelto (*Mark as resolved*) y se completó la fusión. Finalmente se verificó que el programa compila y que las cuatro conversiones funcionan correctamente.

**Lección aprendida:** los conflictos no son errores, sino situaciones normales del trabajo colaborativo que ocurren cuando dos personas editan las mismas líneas. Se resuelven comunicándose y decidiendo juntos qué versión (o combinación) conservar. Para reducirlos, conviene dividir el trabajo en archivos o secciones distintas y sincronizar la rama con `main` frecuentemente.

## Evidencias

Las capturas de pantalla del conflicto y de su resolución se encuentran en la carpeta `/evidencias` del repositorio.
