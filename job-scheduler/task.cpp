class Task
{
private:
    /* declare variables */
    char** taskType;
public:
    Task(/* args */ char** taskType);
    ~Task();
};

// Constructor
Task::Task(/* args */char** taskType)
{
    this->taskType=taskType;
}

//Empty constructor
Task::~Task()
{
}
