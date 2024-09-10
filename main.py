import threading


class Task:
    def run():
        return 1

commsTask = Task()
teleTask = Task()

commsThread = threading.Thread(commsTask)
telemetryThread = threading.Thread(teleTask)