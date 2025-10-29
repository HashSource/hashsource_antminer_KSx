int __fastcall <object::read::util::Bytes as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  char *v2; // r5
  unsigned int v3; // r4
  unsigned __int8 v5[8]; // [sp+0h] [bp-10h] BYREF
  unsigned int v6; // [sp+8h] [bp-8h] BYREF
  char v7; // [sp+Fh] [bp-1h] BYREF

  v2 = *(char **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  core::fmt::Formatter::debug_list((int)v5, a2);
  if ( v3 )
  {
    v7 = *v2;
    core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
    if ( v3 != 1 )
    {
      v7 = v2[1];
      core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
      if ( v3 != 2 )
      {
        v7 = v2[2];
        core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
        if ( v3 != 3 )
        {
          v7 = v2[3];
          core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
          if ( v3 != 4 )
          {
            v7 = v2[4];
            core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
            if ( v3 != 5 )
            {
              v7 = v2[5];
              core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
              if ( v3 != 6 )
              {
                v7 = v2[6];
                core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
                if ( v3 != 7 )
                {
                  v7 = v2[7];
                  core::fmt::builders::DebugSet::entry(v5, (int)&v7, (int)&off_2CB0E0);
                  if ( v3 >= 9 )
                  {
                    v6 = v3;
                    core::fmt::builders::DebugSet::entry(v5, (int)&v6, (int)&off_2CB228);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return core::fmt::builders::DebugList::finish((int)v5);
}
