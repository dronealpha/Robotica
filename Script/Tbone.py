###########################################
#Author:Diego Silva                       #
#Data:29/03/2018                          #
#Descrição:Controler servo motor          #
###########################################

import serial

class ConnectRobot(object):
    def __init__(self, command):
        self.command = command

    def setCon(self):
        communication = serial.Serial("/dev/ttyACM0",9600,timeout=2)
        com = bytes(self.command, "utf-8")
        communication.write(com)


if __name__ == "__main__":
    op=""
    print("#######################################")
    print("#######Welcome the Iron Man############")
    turn = input("Press an option\nH - Higth\nL - Left\nU - Up\nD - Down\n")
    if((turn=='l')or(turn=='L')):
        op='L'
    elif((turn=='h')or(turn=='H')):
        op='H'
    elif((turn=='u')or(turn=='U')):
        op='U'
    elif((turn=='d')or(turn=='D')):
        op='D'
    else:
        print("Opção invalida")

    robot = ConnectRobot(op)
    robot.setCon()
