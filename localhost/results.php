<?php
    $n = intval($_POST["number"]);
    $TypeSeq = $_POST["groupTypeSeq"];
    $TypeGen = $_POST["groupGen"];
    $TypeSort = $_POST["groupTypeSort"];

    $cmd = "C:/localhost/sorter/Sorter.exe ";
    $cmd .= $n . " " . $TypeSeq . " " . $TypeGen . " " . $TypeSort;
    
    system($cmd);
    
    $array = file_get_contents("array.txt");
    $sorted = file_get_contents("sorted.txt");
    $time = file_get_contents("time.txt");
?>


<!DOCTYPE HTML>
<html>
    <head>
        <title>Сортировка lab1</title>
        <meta charset="utf-8">
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
        <center><h1>Алгоритмы сортировки</h1>
        <h3>Лабораторная работа №1</h3>

        <center><div class="button-container">
            <a href="http://localhost/sort.html" class="double-border-button">Назад</a>
        </div></center>

        <h2>Сортировка данных</h2>
        <p>Количество элементов: <b><?php echo $n; ?></b></p>
        <p>Тип структуры: <b><?php echo $TypeSeq; ?></b></p>
        <p>Тип генерации: <b><?php echo $TypeGen; ?></b></p>
        <p>Тип сортировки: <b><?php echo $TypeSort; ?></b></p>
        <br>
        <p>Время: <b><?php echo $time; ?></b></p>
        <p>Входные данные: <b><?php echo $array; ?></b></p>
        <p>Выходные данные: <b><?php echo $sorted; ?></b></p>
        
        <center><div class="button-container">
            <a href="http://localhost/sort.html" class="double-border-button">Назад</a>
        </div></center>
    </body>
</html>