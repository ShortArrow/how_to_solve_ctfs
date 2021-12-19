import time
import pyautogui

for item in range(5):
    time.sleep(1)
    print(item)

for item in range(0,100):
    
    pyautogui.keyDown('tab')
    pyautogui.keyDown('tab')
    for charindex in range(len(str(item))):
        pyautogui.keyDown(str(item)[charindex])
    pyautogui.keyDown('tab')
    pyautogui.press('space')
    time.sleep(0.5)
    pyautogui.keyDown('tab')
    pyautogui.keyDown('tab')
    pyautogui.press('space')
    time.sleep(0.5) 