@echo off
:: Проверка наличия аргументов
if "%~1"=="" (
    echo Ошибка: Необходимо указать сообщение для коммита.
    echo Использование: %~0 "<сообщение_коммита>" "<удалённый_репозиторий>"
    exit /b 1
)

if "%~2"=="" (
    echo Ошибка: Необходимо указать удалённый репозиторий.
    echo Использование: %~0 "<сообщение_коммита>" "<удалённый_репозиторий>"
    exit /b 1
)

:: Сохранение аргументов в переменные
set "commit_message=%~1"
set "remote_repo=%~2"

:: Выполнение команды git add
git add .
if errorlevel 1 (
    echo Ошибка при выполнении 'git add'.
    exit /b 1
)

:: Выполнение команды git commit
git commit -m "%commit_message%"
if errorlevel 1 (
    echo Ошибка при выполнении 'git commit'.
    exit /b 1
)

:: Выполнение команды git push
git push %remote_repo% main
if errorlevel 1 (
    echo Ошибка при выполнении 'git push'.
    exit /b 1
)

echo Команды выполнены успешно!
