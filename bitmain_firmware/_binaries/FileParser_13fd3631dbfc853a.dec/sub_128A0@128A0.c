int __fastcall sub_128A0(const char *a1, char *a2, const char *a3, _BYTE *a4, char a5, char a6, char a7)
{
  size_t v8; // r0
  FILE *v9; // r0
  int v10; // r0
  const char *v11; // r0
  int v12; // r0
  int error; // r0
  const char *v14; // r0
  _DWORD v20[65]; // [sp+1Ch] [bp-BF0h] BYREF
  _BYTE v21[12]; // [sp+120h] [bp-AECh] BYREF
  int v22; // [sp+190h] [bp-A7Ch] BYREF
  __int64 v23; // [sp+194h] [bp-A78h]
  int v24; // [sp+19Ch] [bp-A70h]
  __int64 v25; // [sp+1A0h] [bp-A6Ch]
  __int64 v26; // [sp+1A8h] [bp-A64h]
  _DWORD v27[64]; // [sp+1B0h] [bp-A5Ch] BYREF
  _BYTE v28[12]; // [sp+2B0h] [bp-95Ch] BYREF
  _OWORD v29[66]; // [sp+320h] [bp-8ECh] BYREF
  _DWORD v30[256]; // [sp+740h] [bp-4CCh] BYREF
  __int64 dest; // [sp+B40h] [bp-CCh] BYREF
  _BYTE v32[48]; // [sp+B48h] [bp-C4h] BYREF
  int v33; // [sp+B78h] [bp-94h]
  unsigned int v34; // [sp+BB0h] [bp-5Ch]
  int v35; // [sp+BB4h] [bp-58h]
  int v36; // [sp+BB8h] [bp-54h]
  int bio_RSA_PUBKEY; // [sp+BBCh] [bp-50h]
  int v38; // [sp+BC0h] [bp-4Ch]
  FILE *v39; // [sp+BC4h] [bp-48h]
  FILE *v40; // [sp+BC8h] [bp-44h]
  int v41; // [sp+BCCh] [bp-40h]
  size_t n; // [sp+BD0h] [bp-3Ch]
  FILE *v43; // [sp+BD4h] [bp-38h]
  unsigned int v44; // [sp+BD8h] [bp-34h]
  unsigned __int16 v45; // [sp+BDEh] [bp-2Eh]
  unsigned __int64 v46; // [sp+BE0h] [bp-2Ch]
  FILE *stream; // [sp+BE8h] [bp-24h]
  int v48; // [sp+BECh] [bp-20h]
  int m; // [sp+BF0h] [bp-1Ch]
  int k; // [sp+BF4h] [bp-18h]
  int j; // [sp+BF8h] [bp-14h]
  int v52; // [sp+BFCh] [bp-10h]
  int i; // [sp+C00h] [bp-Ch]
  unsigned __int8 v54; // [sp+C07h] [bp-5h]

  sub_1380C(a1, v32);
  v48 = v33;
  if ( v33 >= 2048 )
  {
    stream = (FILE *)fopen64(a1, "rb");
    if ( stream )
    {
      fread(a4, 0x800u, 1u, stream);
      if ( *a4 == 38 )
      {
        printf("miner_type %s\n", a2);
        v8 = strlen(a2);
        v46 = sub_12078((unsigned __int8 *)a2, v8);
        memcpy(&dest, a4 + 2, sizeof(dest));
        printf("miner_type_hash %16llx, bmu_hash %16llx\n", v46, dest);
        if ( v46 == dest )
        {
          v54 = 0;
          v45 = _byteswap_ushort(*(_WORD *)(a4 + 11));
          if ( !a7 || (printf("content:%x\n", v45), (v45 & 0xFE00) == 0xFE00) )
          {
            for ( i = 0; i <= 15; ++i )
            {
              if ( (((int)v45 >> i) & 1) != 0 )
                ++v54;
            }
            if ( v54 == (unsigned __int8)a4[1304] )
            {
              v52 = ((unsigned __int8)a4[1304] + 9) << 8;
              v44 = _byteswap_ulong(*(_DWORD *)(a4 + 1305));
              for ( j = 0; j < v54; ++j )
              {
                v34 = _byteswap_ulong(*(_DWORD *)&a4[5 * j + 1310]);
                v52 += v34;
                printf("file[%d] size:[%d]\n", j, v34);
              }
              if ( v52 == v48 )
              {
                v43 = (FILE *)fopen64(a3, "r");
                if ( v43 )
                {
                  memset(v30, 0, sizeof(v30));
                  fread(v30, 0x400u, 1u, v43);
                  fclose(v43);
                  v43 = 0;
                  n = ((unsigned __int8)a4[22] << 8) | (unsigned __int8)a4[23];
                  v41 = sub_10C50((int)(a4 + 24), n, (int)(a4 + 1048), (int)v30);
                  if ( v41 )
                  {
                    printf("Check pem payload failed! ret:[%d]\n", v41);
                    if ( stream )
                      fclose(stream);
                    return v41;
                  }
                  else
                  {
                    v40 = (FILE *)fopen64("/usr/bin/fw_version", "w");
                    if ( v40 )
                    {
                      fwrite(a4 + 13, 1u, 8u, v40);
                      fclose(v40);
                      if ( a5 )
                      {
                        v9 = (FILE *)fopen64("/tmp/tmpfw/miner.pem", "w");
                        v39 = v9;
                        if ( !v9 )
                        {
                          puts("Dump Miner.pem Failed!\r");
                          return 15;
                        }
                        fwrite(a4 + 24, 1u, n, v39);
                        fclose(v39);
                        v39 = (FILE *)fopen64("/tmp/tmpfw/miner.pem.sig", "w");
                        if ( !v39 )
                        {
                          puts("Dump Miner.pem.sig Failed!\r");
                          return 16;
                        }
                        fwrite(a4 + 1048, 1u, 0x100u, v39);
                        fclose(v39);
                      }
                      memset(v29, 0, sizeof(v29));
                      SHA256_Init(v28);
                      SHA256_Update(v28, a4, 2048);
                      SHA256_Final(v29, v28);
                      for ( k = 0; k < v54; ++k )
                      {
                        v35 = _byteswap_ulong(*(_DWORD *)&a4[5 * k + 1310]);
                        sub_10DC8(stream, v35, (int)&v29[2 * k + 2], a4[5 * k + 1309], 0, a5);
                      }
                      for ( m = 0; m < v54; ++m )
                        sub_10DC8(stream, 256, (int)&v29[2 * v54 + 2 + 2 * m], a4[5 * m + 1309], 1, a5);
                      memset(v27, 0, sizeof(v27));
                      fseek(stream, -256, 2);
                      fread(v27, 0x100u, 1u, stream);
                      v22 = 0;
                      v23 = 0;
                      v24 = 0;
                      v25 = 0;
                      v26 = 0;
                      SHA256_Init(v21);
                      SHA256_Update(v21, v29, (v54 << 6) + 32);
                      SHA256_Final(&v22, v21);
                      v38 = 0;
                      bio_RSA_PUBKEY = 0;
                      v38 = BIO_new_mem_buf(a4 + 24, 1024);
                      bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v38, 0, 0, 0);
                      if ( bio_RSA_PUBKEY )
                      {
                        v36 = RSA_verify(672, &v22, 32, v27, 256, bio_RSA_PUBKEY);
                        if ( bio_RSA_PUBKEY )
                          RSA_free(bio_RSA_PUBKEY);
                        if ( v38 )
                          BIO_free(v38);
                        if ( v36 == 1 )
                        {
                          if ( stream )
                            fclose(stream);
                          stream = 0;
                          puts("All Done!\r");
                          if ( a6 )
                          {
                            puts("This Comment Of This Package:");
                            memset(v20, 0, 257);
                            memcpy(v20, a4 + 1360, 0x100u);
                            puts((const char *)v20);
                          }
                          return 0;
                        }
                        else
                        {
                          v12 = puts("Check File Sig failed!\r");
                          error = ERR_get_error(v12);
                          v14 = (const char *)ERR_error_string(error, 0);
                          printf("OpenSSL error: %s\n", v14);
                          return 18;
                        }
                      }
                      else
                      {
                        v10 = ERR_get_error(0);
                        v11 = (const char *)ERR_error_string(v10, 0);
                        printf("OpenSSL error: %s\n", v11);
                        puts("Load Pem Failed!");
                        return 17;
                      }
                    }
                    else
                    {
                      puts("Dump version Failed!\r");
                      return 13;
                    }
                  }
                }
                else
                {
                  printf("Cannot Open Root PublicKey '%s'!\n", a3);
                  if ( stream )
                    fclose(stream);
                  return 11;
                }
              }
              else
              {
                printf(
                  "Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n",
                  v44,
                  v48,
                  v52);
                if ( stream )
                  fclose(stream);
                return 10;
              }
            }
            else
            {
              printf("Content Doesn't Match![%d][%d]\n", (unsigned __int8)a4[1304], v54);
              if ( stream )
                fclose(stream);
              return 9;
            }
          }
          else
          {
            puts("This Package Was Not Full Package!");
            return 20;
          }
        }
        else
        {
          puts("input miner_type and bmu miner type donot match!");
          if ( stream )
            fclose(stream);
          return 30;
        }
      }
      else
      {
        printf("'%s' Not A Btmu File!\n", a1);
        if ( stream )
          fclose(stream);
        return 8;
      }
    }
    else
    {
      printf("Read File '%s' Failed!\n", a1);
      return 7;
    }
  }
  else
  {
    printf("File '%s' Not Enough %d, Something Wrong!\n", a1, 2048);
    return 6;
  }
}
