# Лабораторная работа №3.
Перегрузка операторов.
---------------
Согласно варианту описать указанные типы данных и поместить их в отдельный
заголовочный файл, в нем же описать операторы, указанные в варианте. Реализацию
функций поместить в отдельный cpp файл.

Написать программу, проверяющую правильность работы – для наглядности и лучшего
усвоения материала использовать как явный, так и не явный метод вызова функций
операторов (см. пример в конце задания).
### Варианты

| № | Тип данных                                                                                                                                         | Операторы                                                                                                                                                                                                                                                  |
|---|----------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 2 | Квадрат на плоскости<br/>Задается координатой левого верхнего угла, стороной квадрата и<br/>углом, на который квадрат повернут относительно оси OX | Равенство площадей квадратов (перегрузите операции ==, !=, <, >)<br/>Умножение квадрата на вещественное число (увеличивает сторону квадрата)<br/>Прибавление к квадрату вектора (смещение квадрата на указанный вектор)                                    |
| 8 | FIFO (очередь) целых чисел длинной не более 100                                                                                                    | Добавить целое число в очередь (operator <<)<br/>Взять число из очереди (operator >>)                                                                                                                                                                      |


