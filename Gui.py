#import
import pygame
import os

#CFFI初始化
from cffi import FFI
ffi = FFI()

#函数部分
def CheckKeyboardEvents(event):
	if event.key == pygame.K_q:
		exit()