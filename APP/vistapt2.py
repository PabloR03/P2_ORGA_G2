import tkinter as tk
import serial
import time

# Configuración del puerto serial
ser = serial.Serial('COM7', 9600, timeout=1)  # Ajusta el puerto COM7 según tu configuración

def on_confirm():
    numeroA = entry_numeroA.get()
    numeroB = entry_numeroB.get()
    print(f"Número A: {numeroA}, Número B: {numeroB}, Operacion{selected_operation.encode()}" )
    
    # Enviar datos al Arduino
    ser.write(b'S')  # Carácter de inicio
    ser.write(numeroA.encode())  # Enviar número A
    ser.write(numeroB.encode())  # Enviar número B
    ser.write(selected_operation.encode())  # Enviar operación seleccionada

def on_button_click(operation):
    global selected_operation
    # Configurar selected_operation basado en la operación
    if operation == "Suma":
        selected_operation = "0"
    elif operation == "Resta":
        selected_operation = "1"
    elif operation == "Multiplicacion":
        selected_operation = "2"
    elif operation == "Potencia":
        selected_operation = "3"
    elif operation == "Xor":
        selected_operation = "4"
    elif operation == "And":
        selected_operation = "5"
    elif operation == "Or":
        selected_operation = "6"
    elif operation == "Not":
        selected_operation = "7"
    print(f"{operation} button clicked, sending {selected_operation}")

# Crear la ventana principal
root = tk.Tk()
root.title("Control Arduino desde Python")
root.geometry("300x500")

# Etiquetas y cuadros de texto para los números A y B
label_numeroA = tk.Label(root, text="Número A")
label_numeroA.pack()

entry_numeroA = tk.Entry(root)
entry_numeroA.pack()

label_numeroB = tk.Label(root, text="Número B")
label_numeroB.pack()

entry_numeroB = tk.Entry(root)
entry_numeroB.pack()

# Botones de operaciones
operations = ["Suma", "Resta", "Multiplicacion", "Potencia", "Xor", "And", "Or", "Not"]

for operation in operations:
    button = tk.Button(root, text=operation, command=lambda op=operation: on_button_click(op))
    button.pack(fill=tk.X)

# Botón de confirmar
button_confirm = tk.Button(root, text="Confirmar", command=on_confirm)
button_confirm.pack()

# Ejecutar el bucle principal de la aplicación
root.mainloop()
