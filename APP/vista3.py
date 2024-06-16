import tkinter as tk
import serial
import time

# Configuración del puerto serial
ser = serial.Serial('COM7', 9600, timeout=1)  # Ajusta el puerto COM3 según tu configuración

def on_confirm():
    numeroA = entry_numeroA.get()
    numeroB = entry_numeroB.get()
    numeroC = entry_numeroC.get()

    print(f"Número A: {numeroA}, Número B: {numeroB}, Operacion: {numeroC}" )
    
    # Enviar datos al Arduino
    ser.write(b'S')  # Carácter de inicio
    ser.write(numeroA.encode())  # Enviar número A
    ser.write(numeroB.encode())  # Enviar número B
    ser.write(numeroC.encode())  # Enviar operación seleccionada



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

label_numeroC = tk.Label(root, text="Opcion Selector")
label_numeroC1 = tk.Label(root, text="NUMERO 0 = SUMA")
label_numeroC2= tk.Label(root, text="NUMERO 1 = RESTA")
label_numeroC3 = tk.Label(root, text="NUMERO 2 = MULTIPLICACION")
label_numeroC4 = tk.Label(root, text="NUMERO 3 = POTENCIA")
label_numeroC5 = tk.Label(root, text="NUMERO 4 = XOR")
label_numeroC6 = tk.Label(root, text="NUMERO 5 = OR")
label_numeroC7= tk.Label(root, text="NUMERO 6 = AND")
label_numeroC8 = tk.Label(root, text="NUMERO 7 = NOT")

label_numeroC.pack()
label_numeroC1.pack()
label_numeroC2.pack()
label_numeroC3.pack()
label_numeroC4.pack()
label_numeroC5.pack()
label_numeroC6.pack()
label_numeroC7.pack()
label_numeroC8.pack()

entry_numeroC = tk.Entry(root)
entry_numeroC.pack()

# Botón de confirmar
button_confirm = tk.Button(root, text="Confirmar", command=on_confirm)
button_confirm.pack()

# Ejecutar el bucle principal de la aplicación
root.mainloop()
