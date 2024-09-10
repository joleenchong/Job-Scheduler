class Task
{
private:
    /* declare variables */
    int jobId;
public:
    Task::Task(int jobId);
    ~Task();
};

// Constructor
Task::Task(int jobId)
{
    this->jobId = jobId;
}

Task::~Task()
{
    
}

void run()
{

}