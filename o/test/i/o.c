#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void createPartition(const char* diskPath, const char* partitionName, int partitionNumber, int partitionSize)
{
    char command[256];

    // Get the sizes of existing partitions
    int existingSizes[5] = {10, 20, 1, 10, 10}; // Replace with the actual sizes of existing partitions

    // Calculate the start and end positions for the new partition
    int startSize = 0;
    int endSize = 0;
    for (int i = 0; i < partitionNumber; i++) {
        startSize += existingSizes[i];
    }
    endSize = startSize + partitionSize;

    // Create the new partition
    snprintf(command, sizeof(command), "parted -s %s mkpart primary ext4 %dMiB %dMiB", diskPath, startSize, endSize);

    int result = system(command);
    if (result == -1) {
        printf("Failed to execute command.\n");
        exit(1);
    }

    printf("Partition created successfully.\n");
}

int main()
{
    const char* diskPath = "/dev/vramdisk";
    const char* partitionName = "NewPartition";
    int partitionNumber = 3; // Choose the desired partition number
    int partitionSize = 10;  // Choose the desired partition size in MiB

    createPartition(diskPath, partitionName, partitionNumber, partitionSize);

    return 0;
}

