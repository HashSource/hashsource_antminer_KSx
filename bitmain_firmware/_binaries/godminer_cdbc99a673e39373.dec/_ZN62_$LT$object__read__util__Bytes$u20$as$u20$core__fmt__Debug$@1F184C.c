int __fastcall <object::read::util::Bytes as core::fmt::Debug>::fmt(int a1)
{
  char *v1; // r5
  unsigned int v2; // r4
  _BYTE v4[8]; // [sp+0h] [bp-10h] BYREF
  unsigned int v5; // [sp+8h] [bp-8h] BYREF
  char v6; // [sp+Fh] [bp-1h] BYREF

  v1 = *(char **)a1;
  v2 = *(_DWORD *)(a1 + 4);
  core::fmt::Formatter::debug_list(v4);
  if ( v2 )
  {
    v6 = *v1;
    core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
    if ( v2 != 1 )
    {
      v6 = v1[1];
      core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
      if ( v2 != 2 )
      {
        v6 = v1[2];
        core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
        if ( v2 != 3 )
        {
          v6 = v1[3];
          core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
          if ( v2 != 4 )
          {
            v6 = v1[4];
            core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
            if ( v2 != 5 )
            {
              v6 = v1[5];
              core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
              if ( v2 != 6 )
              {
                v6 = v1[6];
                core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
                if ( v2 != 7 )
                {
                  v6 = v1[7];
                  core::fmt::builders::DebugSet::entry(v4, &v6, &off_2CC0E0);
                  if ( v2 >= 9 )
                  {
                    v5 = v2;
                    core::fmt::builders::DebugSet::entry(v4, &v5, &off_2CC228);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return core::fmt::builders::DebugList::finish(v4);
}
