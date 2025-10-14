// Decompiled: update-daemon_5aac01556a7ccf01

void _DT_INIT(void)

{
    FUN_00010b4c();
    return;
}

undefined4 FUN_000108c8(undefined4 param_1, undefined4 *param_2)

{
    char *pcVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    char *__haystack;
    int local_44[3];
    sockaddr local_38;
    sockaddr sStack_28;

    __haystack = (char *)*param_2;
    pcVar1 = strstr(__haystack, "daemonc");
    if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(__haystack, "daemons");
        if (pcVar1 == (char *)0x0) {
            puts("Cannot Find Command!\r");
            uVar3 = 0xffffffff;
        } else {
            iVar2 = socket(2, 1, 0);
            if (iVar2 == -1) {
                /* WARNING: Subroutine does not return */
                __assert_fail("sockfd_server != -1", "update-daemon.c", 0x81,
                              "ProcessServer");
            }
            local_38.sa_family = 2;
            local_38.sa_data[0] = '\0';
            local_38.sa_data[1] = '\0';
            local_38.sa_data[2] = '\0';
            local_38.sa_data[3] = '\0';
            local_38.sa_data[4] = '\0';
            local_38.sa_data[5] = '\0';
            local_38.sa_data[6] = '\0';
            local_38.sa_data[7] = '\0';
            local_38.sa_data[8] = '\0';
            local_38.sa_data[9] = '\0';
            local_38.sa_data[10] = '\0';
            local_38.sa_data[0xb] = '\0';
            local_38.sa_data[0xc] = '\0';
            local_38.sa_data[0xd] = '\0';
            local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
            uVar3 = FUN_00010bdc("22322");
            printf("Will Listening To Port[%d]\r\n", uVar3);
            local_38.sa_data._0_2_ = SUB42(uVar3, 0);
            iVar4 = bind(iVar2, &local_38, 0x10);
            if (iVar4 == -1) {
                fwrite("bind error!\n", 1, 0xc, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            iVar4 = listen(iVar2, 0x200);
            if (iVar4 == -1) {
                fwrite("listen error!\n", 1, 0xe, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            do {
                while (true) {
                    puts("waiting for new connection...");
                    local_44[1] = 0x10;
                    local_44[0] =
                        accept(iVar2, &sStack_28, (socklen_t *)(local_44 + 1));
                    if (local_44[0] != -1)
                        break;
                    fwrite("Accept error!\n", 1, 0xe, stderr);
                }
                puts("A new connection occurs!");
                iVar4 = pthread_create((pthread_t *)(local_44 + 2),
                                       (pthread_attr_t *)0x0, FUN_00010c28,
                                       local_44);
            } while (iVar4 != -1);
            fwrite("pthread_create error!\n", 1, 0x16, stderr);
            iVar2 = shutdown(iVar2, 1);
            if (iVar2 == -1) {
                /* WARNING: Subroutine does not return */
                __assert_fail("ret != -1", "update-daemon.c", 0xab,
                              "ProcessServer");
            }
            puts("Server shuts down");
            uVar3 = 0;
        }
    } else {
        uVar3 = FUN_00010dbc(param_2[1]);
    }
    return uVar3;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_000108c8, in_stack_00000000, &stack0x00000004,
                      0x10ed9, &DAT_00010f15, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010b60) */

void FUN_00010b4c(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010b84) */
/* WARNING: Removing unreachable block (ram,0x00010b8e) */

void FUN_00010b70(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010bb0) */
/* WARNING: Removing unreachable block (ram,0x00010bba) */

void FUN_00010b94(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022094 == '\0') {
        FUN_00010b70();
        DAT_00022094 = '\x01';
    }
    return;
}

int FUN_00010bdc(char *param_1)

{
    size_t sVar1;
    byte *pbVar2;
    int iVar3;

    sVar1 = strlen(param_1);
    pbVar2 = (byte *)(param_1 + -1);
    iVar3 = 0;
    while (pbVar2 != (byte *)(param_1 + (sVar1 - 2))) {
        pbVar2 = pbVar2 + 1;
        iVar3 = ((uint)*pbVar2 + iVar3 + -0x30) * 10;
    }
    return (uint)(byte)param_1[sVar1 - 1] + iVar3 + -0x30;
}

void FUN_00010c28(int *param_1)

{
    uint uVar1;
    size_t sVar2;
    int __fd;
    uint uVar3;
    char local_820[12];
    undefined2 local_814;
    char local_810[1024];
    char local_410[25];
    undefined1 auStack_3f7[999];

    puts("New Thread!\r");
    local_810[0] = '\0';
    local_810[1] = '\0';
    local_810[2] = '\0';
    local_810[3] = '\0';
    memset(local_810 + 4, 0, 0x3fc);
    __fd = *param_1;
    read(__fd, local_810, 0x400);
    printf("Recv:\'%s\'\r\n", local_810);
    builtin_strncpy(local_410, "/usr/sbin/updateporc.sh ", 0x18);
    local_410[0x18] = 0;
    memset(auStack_3f7, 0, 999);
    strcpy(local_410 + 0x18, local_810);
    builtin_strncpy(local_820, "Come On WUHA", 0xc);
    local_814 = 0x4e;
    uVar1 = system(local_410);
    if (uVar1 == 0xffffffff) {
        puts("system err!\r");
        builtin_strncpy(local_820, "500", 4);
    } else {
        printf("system status:[%d]\r\n", uVar1);
        uVar3 = (uVar1 << 0x10) >> 0x18;
        if ((uVar1 & 0x7f) == 0) {
            if (uVar3 == 0) {
                puts("Shell Exec Successfully!\r");
                builtin_strncpy(local_820, "200", 4);
            } else {
                printf("Shell Execute Failed, Ret[%d]\r\n", uVar3);
                sprintf(local_820, "%d", uVar3);
            }
        } else {
            printf("Other Exit Ret[%d]\r\n", uVar3);
            sprintf(local_820, "6%d", uVar3);
        }
    }
    sVar2 = strlen(local_820);
    write(__fd, local_820, sVar2 + 1);
    close(__fd);
    /* WARNING: Subroutine does not return */
    pthread_exit((void *)0x0);
}

int FUN_00010dbc(char *param_1)

{
    int iVar1;
    int iVar2;
    size_t sVar3;
    ssize_t sVar4;
    sockaddr local_420;
    undefined4 local_410;
    undefined1 auStack_40c[1020];

    if (param_1 != (char *)0x0) {
        local_420.sa_data[0] = '\0';
        local_420.sa_data[1] = '\0';
        local_420.sa_data[2] = '\0';
        local_420.sa_data[3] = '\0';
        local_420.sa_data[4] = '\0';
        local_420.sa_data[5] = '\0';
        local_420.sa_family = 2;
        local_420.sa_data[6] = '\0';
        local_420.sa_data[7] = '\0';
        local_420.sa_data[8] = '\0';
        local_420.sa_data[9] = '\0';
        local_420.sa_data[10] = '\0';
        local_420.sa_data[0xb] = '\0';
        local_420.sa_data[0xc] = '\0';
        local_420.sa_data[0xd] = '\0';
        local_420.sa_data._2_4_ = inet_addr("127.0.0.1");
        local_420.sa_data._0_2_ = FUN_00010bdc("22322");
        iVar1 = socket(2, 1, 0);
        if (iVar1 < 0) {
            perror("socket err:");
            return -1;
        }
        iVar2 = connect(iVar1, &local_420, 0x10);
        if (iVar2 < 0) {
            perror("connect err:");
            return -2;
        }
        sVar3 = strlen(param_1);
        send(iVar1, param_1, sVar3 + 1, 0);
        local_410 = 0;
        memset(auStack_40c, 0, 0x3fc);
        sVar4 = recv(iVar1, &local_410, 0x400, 0);
        if (0 < sVar4) {
            auStack_40c[sVar4 + -4] = 0;
            iVar1 = FUN_00010bdc(&local_410);
            if (iVar1 != 200) {
                return iVar1;
            }
            return 0;
        }
    }
    return -3;
}

void FUN_00010ed8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _DT_INIT();
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void _DT_FINI(void)

{
    return;
}
