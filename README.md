# 📚 Apuntes de Algoritmos y Estructuras de Datos (DSA)

¡Bienvenid@ a mi repositorio de apuntes sobre **Algoritmos y Estructuras de Datos (DSA)**! Este proyecto es un espacio personal donde anoto y organizo conceptos, implementaciones y ejemplos de algoritmos y estructuras de datos, principalmente en **C**, aunque también incluiré ejemplos en otros lenguajes como [Python, C++, Java, etc.] cuando sea necesario.

El objetivo es tener una referencia clara y práctica para estudiar, repasar y compartir conocimiento sobre DSA. Siéntete libre de explorar, usar los apuntes o contribuir si quieres.

## 🚀 ¿Qué encontrarás aquí?

Este repositorio contiene:

- **Apuntes teóricos**: Explicaciones breves y concisas sobre algoritmos y estructuras de datos, con un enfoque en conceptos clave.
- **Implementaciones**: Código funcional en **C** (y otros lenguajes en el futuro) para algoritmos y estructuras de datos comunes.
- **Ejemplos prácticos**: Problemas resueltos con explicaciones paso a paso.
- **Recursos adicionales**: Enlaces a material útil, como libros, videos o artículos relacionados con DSA.

### Estructuras de datos incluidas (o por incluir):
- Listas enlazadas (sencillas, dobles, circularesm doblemente enlazadas)
- Pilas (Stacks)
- Colas (Queues)
- Árboles (binarios, BST, AVL, etc.)
- Grafos
- Tablas hash

### Algoritmos incluidos (o por incluir):
- Algoritmos de ordenamiento (Bubble Sort, Merge Sort, Quick Sort, etc.)
- Algoritmos de búsqueda (Búsqueda lineal, búsqueda binaria, BFS, DFS)
- Algoritmos sobre grafos (Dijkstra, Kruskal, Prim)
- Algoritmos dinámicos (ej. Mochila, LCS)

## 🛠️ Estructura del repositorio

El repositorio está organizado de la siguiente manera:
```
 dsa-apuntes
├──  estructuras_datos
│   ├──  listas_enlazadas.c
│   ├──  pilas.c
│   ├──  colas.c
│   └── ...
├──  algoritmos
│   ├──  ordenamiento
│   │   ├──  bubble_sort.c
│   │   ├──  merge_sort.c
│   │   └── ...
│   ├──  busqueda
│   │   ├──  busqueda_binaria.c
│   │   └── ...
│   └── ...
├──  ejemplos
│   ├──  problema1.c
│   ├──  problema2.c
│   └── ...
├──  README.md
└──  recursos.md


```

- **estructuras_datos/**: Implementaciones de estructuras de datos.
- **algoritmos/**: Código de algoritmos, organizados por categoría (ordenamiento, búsqueda, etc.).
- **ejemplos/**: Problemas resueltos con explicaciones.
- **recursos.md**: Lista de recursos externos recomendados.

## 💻 Cómo usar este repositorio

1. **Clona el repositorio**:
   ```bash
   git clone https://github.com/tu_usuario/dsa-apuntes.git
   ```
---
# Cómo están organizados los apuntes

Cómo están organizados los apuntes Cada archivo de código sigue un formato estándar para mantener la consistencia:Descripción: Una breve explicación del algoritmo o estructura de datos.
Código comentado: Implementación con comentarios claros para entender cada paso.
Ejemplo de uso: Un caso práctico o main() que muestra cómo funciona.
Complejidad: Análisis de la complejidad temporal y espacial (O(n), O(log n), etc.).

Ejemplo de un archivo:
```
// bubble_sort.c
// Descripción: Implementación del algoritmo de ordenamiento Bubble Sort.
// Complejidad: O(n²) en tiempo, O(1) en espacio.

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Código comentado paso a paso
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambio
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

#  Recursos recomendados

Todos los recursos, videos, links, cursos etc.. estarán proximamente en el archivo ```recursos.md```

---

# 📋 Checklist para el Repositorio de Apuntes de DSA

Esta checklist sirve para llevar un seguimiento de las tareas completadas y pendientes en el repositorio de apuntes sobre Algoritmos y Estructuras de Datos (DSA). Se actualiza regularmente para reflejar el progreso.

## 📌 Tareas Generales

- [X] Crear el repositorio en GitHub.
- [X] Configurar la estructura inicial de carpetas (`estructuras_datos/`, `algoritmos/`, `ejemplos/`).
- [X] Escribir y subir el archivo `README.md` con la descripción del proyecto.
- [x] Crear el archivo `recursos.md` con enlaces a recursos externos.

## 🏗️ Estructuras de Datos

### Listas Enlazadas
- [X] Lista enlazada simple
  - [x] Apuntes teóricos
  - [x] Implementación en C
  - [x] Ejemplo práctico
- [x] Lista enlazada doble
  - [x] Apuntes teóricos
  - [x] Implementación en C
  - [x] Ejemplo práctico
- [x] Lista enlazada circular
  - [x] Apuntes teóricos
  - [x] Implementación en C
  - [ ] Análisis de complejidad

### Pilas (Stacks)
- [ ] Apuntes teóricos
- [ ] Implementación en C (basada en arreglos)
- [ ] Implementación en C (basada en listas enlazadas)
- [ ] Ejemplo práctico (ej. evaluación de expresiones)

### Colas (Queues)
- [ ] Apuntes teóricos
- [ ] Implementación en C (basada en arreglos)
- [ ] Implementación en C (basada en listas enlazadas)
- [ ] Ejemplo práctico (ej. simulación de colas)

### Árboles
- [ ] Árbol binario
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
  - [ ] Ejemplo práctico
- [ ] Árbol de búsqueda binaria (BST)
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
  - [ ] Ejemplo práctico
- [ ] Árbol AVL
  - [ ] Apuntes teóricos
  - [ ] Implementación en C

### Grafos
- [ ] Apuntes teóricos (representación: lista de adyacencia, matriz de adyacencia)
- [ ] Implementación en C
- [ ] Ejemplo práctico

### Tablas Hash
- [ ] Apuntes teóricos
- [ ] Implementación en C
- [ ] Ejemplo práctico

## 🔍 Algoritmos

### Ordenamiento
- [ ] Bubble Sort
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
  - [ ] Análisis de complejidad
- [ ] Merge Sort
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
  - [ ] Análisis de complejidad
- [ ] Quick Sort
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
  - [ ] Análisis de complejidad

### Búsqueda
- [ ] Búsqueda lineal
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] Búsqueda binaria
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] BFS (Búsqueda en amplitud)
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] DFS (Búsqueda en profundidad)
  - [ ] Apuntes teóricos
  - [ ] Implementación en C

### Algoritmos sobre Grafos
- [ ] Algoritmo de Dijkstra
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] Algoritmo de Kruskal
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] Algoritmo de Prim
  - [ ] Apuntes teóricos
  - [ ] Implementación en C

### Algoritmos Dinámicos
- [ ] Problema de la mochila
  - [ ] Apuntes teóricos
  - [ ] Implementación en C
- [ ] Subsecuencia común más larga (LCS)
  - [ ] Apuntes teóricos
  - [ ] Implementación en C

## 📚 Ejemplos Prácticos
- [ ] Problema 1: [Descripción breve del problema]
  - [ ] Implementación en C
  - [ ] Explicación paso a paso
- [ ] Problema 2: [Descripción breve del problema]
  - [ ] Implementación en C
  - [ ] Explicación paso a paso
- [ ] Añadir más problemas según se resuelvan

## 📝 Mantenimiento
- [ ] Revisar y corregir errores en el código.
- [ ] Actualizar el README con nuevos contenidos.
- [ ] Actualizar esta checklist según el progreso.
- [ ] Responder a issues o pull requests (si los hay).

## 🛠️ Otras Tareas
- [ ] Añadir pruebas unitarias para el código en C.
- [ ] Documentar cómo compilar y ejecutar los ejemplos.
- [ ] Optimizar implementaciones existentes (si aplica).
- [ ] Agregar diagramas o visualizaciones para explicar conceptos complejos.

---

*Última actualización: 02 de septiembre de 2025*
