# Лабораторная работа №7
Реализовать кольцевой буфер в виде stl-совместимого контейнера (например, может быть использован со стандартными
алгоритмами), обеспеченного итератором произвольного доступа.

Реализация не должна использовать ни одни из контейнеров STL.
Буфер должен обладать следующими возможностями:
1. Вставка и удаление в конец
2. Вставка и удаление в начало
3. Вставка и удаление в произвольное место по итератору
4. Доступ в конец, начало
5. Доступ по индексу
6. Изменение капасити