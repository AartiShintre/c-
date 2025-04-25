# Define the Job class
class Job:
    def __init__(self, id, deadline, profit):
        self.id = id
        self.deadline = deadline
        self.profit = profit

# Function to solve the job sequencing problem
def job_sequencing_with_deadlines(jobs, n):
    # Step 1: Sort jobs based on descending order of profit
    jobs.sort(key=lambda x: x.profit, reverse=True)

    # Step 2: Create a list to keep track of available time slots
    result = [None] * n  # The result array to store job IDs
    slot = [False] * n   # To check if a slot is already filled
    
    total_profit = 0  # To keep track of total profit

    # Step 3: Iterate over the jobs to schedule them
    for i in range(n):
        # Find a free slot for this job (starting from its deadline)
        for j in range(min(n, jobs[i].deadline) - 1, -1, -1):
            if not slot[j]:
                # If the slot is empty, assign the job to this slot
                result[j] = jobs[i].id
                slot[j] = True
                total_profit += jobs[i].profit
                break
    
    # Step 4: Return the selected job IDs and total profit
    return result, total_profit


# Example usage
jobs = [
    Job('a', 4, 20),
    Job('b', 1, 10),
    Job('c', 1, 40),
    Job('d', 1, 30),
    Job('e', 3, 15)
]

n = len(jobs)

# Get the job sequence and total profit
job_sequence, total_profit = job_sequencing_with_deadlines(jobs, n)

# Print the results
print(f"Job Sequence: {job_sequence}")
print(f"Total Profit: {total_profit}")

