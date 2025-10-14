// Decompiled: cgminer-api_d777a286d5f10085

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00010bec();
    return iVar1;
}

undefined4 main(int param_1, undefined4 *param_2)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    undefined4 uVar5;
    long lVar6;
    char *pcVar7;
    char *pcVar8;

    if (param_1 < 2) {
    LAB_00010b3c:
        pcVar3 = "127.0.0.1";
        pcVar8 = "summary";
        iVar2 = 0xfbc;
        goto LAB_00010b50;
    }
    pcVar7 = (char *)param_2[1];
    if (*pcVar7 == '-') {
        cVar1 = pcVar7[1];
        if (cVar1 == '?') {
            if (pcVar7[2] == '\0')
                goto LAB_00010b74;
        } else if (cVar1 == 'h') {
            if (pcVar7[2] == '\0')
                goto LAB_00010b74;
            goto LAB_00010a4c;
        }
        iVar2 = strcmp(pcVar7, "--help");
        if (iVar2 == 0)
            goto LAB_00010b74;
        if ((cVar1 != 'o') || (pcVar7[2] != '\0'))
            goto LAB_00010a64;
        if (param_1 != 2) {
            pcVar7 = (char *)0x2;
        }
        DAT_00022080 = 1;
        if (param_1 == 2)
            goto LAB_00010b3c;
    } else {
    LAB_00010a4c:
        iVar2 = strcmp(pcVar7, "--help");
        if (iVar2 == 0) {
        LAB_00010b74:
            fprintf(stderr, "usAge: %s [command [ip/host [port]]]\n", *param_2);
            return 1;
        }
    LAB_00010a64:
        pcVar7 = (char *)0x1;
    }
    pcVar3 = (char *)FUN_00010c7c(param_2[(int)pcVar7]);
    pcVar8 = "summary";
    if (*pcVar3 != '\0') {
        pcVar8 = pcVar3;
    }
    if ((int)(pcVar7 + 1) < param_1) {
        pcVar4 = (char *)FUN_00010c7c(param_2[(int)(pcVar7 + 1)]);
        pcVar3 = "127.0.0.1";
        if (*pcVar4 != '\0') {
            pcVar3 = pcVar4;
        }
        if (((int)(pcVar7 + 2) < param_1) &&
            (pcVar7 = (char *)FUN_00010c7c(param_2[(int)(pcVar7 + 2)]),
             *pcVar7 != '\0')) {
            lVar6 = strtol(pcVar7, (char **)0x0, 10);
            iVar2 = (int)(short)lVar6;
        } else {
            iVar2 = 0xfbc;
        }
    } else {
        iVar2 = 0xfbc;
        pcVar3 = "127.0.0.1";
    }
LAB_00010b50:
    uVar5 = callapi(pcVar8, pcVar3, iVar2);
    return uVar5;
}

void _start(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x11215,
                      0x11251, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010c00) */

void FUN_00010bec(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010c24) */
/* WARNING: Removing unreachable block (ram,0x00010c2e) */

void FUN_00010c10(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010c50) */
/* WARNING: Removing unreachable block (ram,0x00010c5a) */

void FUN_00010c34(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002207c == '\0') {
        FUN_00010c10();
        DAT_0002207c = '\x01';
    }
    return;
}

byte *FUN_00010c7c(byte *param_1)

{
    ushort **ppuVar1;
    byte *pbVar2;
    byte *pbVar3;

    ppuVar1 = __ctype_b_loc();
    do {
        pbVar2 = param_1;
        param_1 = pbVar2 + 1;
    } while (((*ppuVar1)[*pbVar2] & 0x2000) != 0);
    pbVar3 = (byte *)__rawmemchr(pbVar2, (*ppuVar1)[*pbVar2] & 0x2000);
    while (pbVar2 < pbVar3) {
        pbVar3 = pbVar3 + -1;
        if (((*ppuVar1)[*pbVar3] & 0x2000) != 0) {
            *pbVar3 = 0;
        }
    }
    return pbVar2;
}

void display(char *param_1)

{
    char *pcVar1;
    char *pcVar2;
    ushort **ppuVar3;
    char *pcVar4;
    char *pcVar5;
    int iVar6;
    char *pcVar7;

    if (param_1 != (char *)0x0) {
        do {
            pcVar1 = strchr(param_1, 0x7c);
            if (pcVar1 == (char *)0x0) {
                pcVar1 = (char *)0x0;
                if (*param_1 == '\0') {
                    return;
                }
            LAB_00010d64:
                iVar6 = 0;
                do {
                    pcVar4 = strchr(param_1, 0x2c);
                    if (pcVar4 == (char *)0x0) {
                        pcVar4 = (char *)0x0;
                        if (*param_1 == '\0')
                            break;
                    LAB_00010d88:
                        pcVar2 = strchr(param_1, 0x3d);
                        if (pcVar2 == (char *)0x0) {
                            if (iVar6 == 0) {
                            LAB_00010e64:
                                printf("[%s%s] =>\n(\n", param_1, "");
                            }
                        LAB_00010e44:
                            printf("   [%d] => %s\n", iVar6, param_1);
                        } else {
                            pcVar7 = pcVar2 + 1;
                            *pcVar2 = '\0';
                            if (iVar6 == 0) {
                                if (pcVar7 == (char *)0x0)
                                    goto LAB_00010e64;
                                ppuVar3 = __ctype_b_loc();
                                pcVar5 = pcVar7;
                                if (((*ppuVar3)[(byte)pcVar2[1]] & 0x800) ==
                                    0) {
                                    pcVar5 = "";
                                }
                                printf("[%s%s] =>\n(\n", param_1, pcVar5);
                            } else if (pcVar7 == (char *)0x0)
                                goto LAB_00010e44;
                            printf("   [%s] => %s\n", param_1, pcVar7);
                        }
                    } else {
                        *pcVar4 = '\0';
                        pcVar4 = pcVar4 + 1;
                        if (*param_1 != '\0')
                            goto LAB_00010d88;
                    }
                    param_1 = pcVar4;
                    iVar6 = iVar6 + 1;
                } while (param_1 != (char *)0x0);
                puts(")");
            } else {
                *pcVar1 = '\0';
                pcVar1 = pcVar1 + 1;
                if (*param_1 != '\0')
                    goto LAB_00010d64;
            }
            param_1 = pcVar1;
        } while (param_1 != (char *)0x0);
    }
    return;
}

int callapi(char *param_1, char *param_2, uint param_3)

{
    hostent *phVar1;
    int __fd;
    int iVar2;
    size_t sVar3;
    size_t sVar4;
    char *pcVar5;
    ssize_t sVar6;
    int *piVar7;
    char *pcVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    char *__buf;
    undefined4 local_48;
    undefined4 uStack_44;
    undefined4 local_40;
    undefined4 uStack_3c;
    sockaddr local_38;

    phVar1 = gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
        return 1;
    }
    __fd = socket(2, 1, 0);
    if (__fd == -1) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("Socket initialisation failed: %s\n", pcVar5);
        return 1;
    }
    local_38.sa_data._0_2_ =
        (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    local_38.sa_family = 2;
    local_38.sa_data[6] = '\0';
    local_38.sa_data[7] = '\0';
    local_38.sa_data[8] = '\0';
    local_38.sa_data[9] = '\0';
    local_38.sa_data[10] = '\0';
    local_38.sa_data[0xb] = '\0';
    local_38.sa_data[0xc] = '\0';
    local_38.sa_data[0xd] = '\0';
    local_38.sa_data._2_4_ = *(undefined4 *)*phVar1->h_addr_list;
    iVar2 = connect(__fd, &local_38, 0x10);
    if (iVar2 < 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("Socket connect failed: %s\n", pcVar5);
        return 1;
    }
    local_48 = 1;
    uStack_44 = 0x3c;
    iVar2 = setsockopt(__fd, 1, 0xd, &local_48, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_LINGER failed (%s)\n", pcVar5);
        close(__fd);
    }
    local_40 = 10;
    uStack_3c = 0;
    iVar2 = setsockopt(__fd, 1, 0x15, &local_40, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n", pcVar5);
        close(__fd);
    }
    iVar2 = setsockopt(__fd, 1, 0x14, &local_40, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n", pcVar5);
        close(__fd);
    }
    sVar3 = strlen(param_1);
    sVar3 = send(__fd, param_1, sVar3, 0);
    if ((int)sVar3 < 1) {
        piVar7 = __errno_location();
        iVar2 = 1;
        pcVar5 = strerror(*piVar7);
        printf("cgminer api send failed: %s\n", pcVar5);
    } else {
        sVar4 = strlen(param_1);
        if (sVar4 == sVar3) {
            pcVar5 = (char *)malloc(0x10000);
            if (pcVar5 == (char *)0x0) {
                printf("cgminer api: OOM (%d)\n", 0x10000);
                return 1;
            }
            iVar11 = 3;
            iVar10 = 0;
            iVar9 = 0xffff;
            while (true) {
                __buf = pcVar5 + iVar10;
                sVar3 = iVar9 + 0x10000;
                sVar6 = recv(__fd, __buf, iVar9 - iVar10, 0);
                iVar10 = iVar10 + sVar6;
                if (sVar6 < 0)
                    break;
                if (sVar6 == 0) {
                    puts("Recv failed: api server close the socket");
                    iVar2 = 1;
                    goto LAB_0001119c;
                }
                if (iVar9 != iVar10) {
                    __buf = pcVar5 + iVar10;
                    goto LAB_0001119c;
                }
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) {
                    __buf = pcVar5 + iVar9;
                    goto LAB_0001119c;
                }
                pcVar5 = (char *)realloc(pcVar5, sVar3);
                iVar9 = iVar9 + 0xffff;
                if (pcVar5 == (char *)0x0) {
                    printf("cgminer realloc: OOM (%d)\n", sVar3);
                    return 1;
                }
            }
            piVar7 = __errno_location();
            iVar2 = 1;
            pcVar8 = strerror(*piVar7);
            printf("Recv failed: %s\n", pcVar8);
        LAB_0001119c:
            iVar9 = DAT_00022080;
            *__buf = '\0';
            if (iVar9 == 0) {
                display();
            } else {
                puts(pcVar5);
            }
            free(pcVar5);
        }
    }
    close(__fd);
    return iVar2;
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}
