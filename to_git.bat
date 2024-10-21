@echo off
:: Сохранение фиксированного сообщения для коммита
set "commit_message=changes"

:: Определение текущего каталога и установка remote
set "current_dir=%cd%"
if "%current_dir%"=="C:\Users\zakre\Desktop\my_life" (
    set "remote_repo=vault"
) else (
    set "remote_repo=origin"
)

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
