#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_PARTITIONS 6

void createPartition(const char *partitionPath, const char *partitionName) {
    char fullPath[256];
    snprintf(fullPath, sizeof(fullPath), "%s/%s", partitionPath, partitionName);

    int fd = open(fullPath, O_RDWR | O_CREAT, 0644);
    if (fd == -1) {
        perror("Failed to create partition1");
    } else {
        printf("Partition %s created successfully.\n", fullPath);
        close(fd);
    }
}

void deletePartition(const char *partitionPath) {
    if (remove(partitionPath) == 0) {
        printf("Partition %s deleted successfully.\n", partitionPath);
    } else {
        perror("Failed to delete partition2");
    }
}

int main() {
    const char *partitionPaths[MAX_PARTITIONS] = {
        "/mnt/vramdisk1",
        "/mnt/vramdisk2",
        "/mnt/vramdisk3",
        "/mnt/vramdisk5",
        "/mnt/vramdisk6"
    };

    int choice;
    char partitionName[256];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create partition\n");
        printf("2. Delete partition\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the index of the disk to create a partition (1-6): ");
                int diskIndex;
                scanf("%d", &diskIndex);
                getchar(); // Consume the newline character from the previous input

                if (diskIndex < 1 || diskIndex > MAX_PARTITIONS) {
                    printf("Invalid disk index.\n");
                    break;
                }

                printf("Enter partition name: ");
                fgets(partitionName, sizeof(partitionName), stdin);
                partitionName[strcspn(partitionName, "\n")] = '\0'; // Remove trailing newline

                createPartition(partitionPaths[diskIndex - 1], partitionName);
                break;

            case 2:
                printf("Enter partition name to delete (e.g., /dev/vramdiskX/partitionName): ");
                getchar(); // Consume the newline character from the previous input
                fgets(partitionName, sizeof(partitionName), stdin);
                partitionName[strcspn(partitionName, "\n")] = '\0'; // Remove trailing newline

                deletePartition(partitionName);
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}

