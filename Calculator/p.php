<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="">
        <label for="num1">Number 1:</label>
        <input type="number" id="num1" name="num1" required>
        
        <label for="num2">Number 2:</label>
        <input type="number" id="num2" name="num2" required>
        
        <label for="operation">Operation:</label>
        <select id="operation" name="operation">
            <option value="add">Add</option>
            <option value="subtract">Subtract</option>
            <option value="multiply">Multiply</option>
            <option value="divide">Divide</option>
        </select>
        
        <button type="submit">Calculate</button>
    </form>
    
</body>
</html>