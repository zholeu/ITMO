#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/fs.h>

void deletePartition(const char* partitionPath) {
    int fd = open(partitionPath, O_RDWR);
    if (fd == -1) {
        perror("Failed to open partition");
        return;
    }

    if (ioctl(fd, BLKRRPART, NULL) == -1) {
        perror("Failed to delete partition");
        close(fd);
        return;
    }

    printf("Partition %s deleted successfully\n", partitionPath);
    close(fd);
}

int main() {
    const char* partitionToDelete = "/dev/vramdisk1";  // Specify the partition to delete

    deletePartition(partitionToDelete);

    return 0;
}

