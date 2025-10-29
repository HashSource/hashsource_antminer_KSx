bool __fastcall gimli::arch::RiscV::name_to_register(_DWORD *s1, int a2)
{
  int v3; // r4

  if ( a2 == 4 )
  {
    if ( *s1 == 1869768058 )
      return 1;
    if ( *s1 != 808547174 )
    {
      if ( *s1 != 825324390 )
      {
        if ( *s1 != 808547430 )
          return bcmp(s1, aFt11, 4u) == 0;
        return 1;
      }
      return 1;
    }
    return 1;
  }
  if ( a2 != 3 )
  {
    if ( a2 != 2 )
      return 0;
    if ( *(_WORD *)s1 != 12408 )
    {
      v3 = 1;
      switch ( *(_WORD *)s1 )
      {
        case 0x3178:
          return 1;
        case 0x3278:
          return v3;
        case 0x3378:
          return 1;
        case 0x3478:
          return 1;
        case 0x3578:
          return 1;
        case 0x3678:
          return 1;
        case 0x3778:
          return 1;
        case 0x3878:
          return 1;
        case 0x3978:
          return 1;
      }
      if ( *(_WORD *)s1 != 12390 )
      {
        if ( *(_WORD *)s1 != 12646 )
        {
          if ( *(_WORD *)s1 != 12902 )
          {
            if ( *(_WORD *)s1 != 13158 )
            {
              if ( *(_WORD *)s1 != 13414 )
              {
                if ( *(_WORD *)s1 != 13670 )
                {
                  if ( *(_WORD *)s1 != 13926 )
                  {
                    if ( *(_WORD *)s1 != 14182 )
                    {
                      if ( *(_WORD *)s1 != 14438 )
                      {
                        if ( *(_WORD *)s1 != 14694 )
                        {
                          if ( *(_WORD *)s1 != 24946 )
                          {
                            if ( *(_WORD *)s1 != 28787 )
                            {
                              if ( *(_WORD *)s1 != 28775 )
                              {
                                if ( *(_WORD *)s1 != 28788 )
                                {
                                  if ( *(_WORD *)s1 != 12404 )
                                  {
                                    if ( *(_WORD *)s1 != 12660 )
                                    {
                                      if ( *(_WORD *)s1 != 12916 )
                                      {
                                        if ( *(_WORD *)s1 != 12403 )
                                        {
                                          if ( *(_WORD *)s1 != 12659 )
                                          {
                                            if ( *(_WORD *)s1 != 12385 )
                                            {
                                              if ( *(_WORD *)s1 != 12641 )
                                              {
                                                if ( *(_WORD *)s1 != 12897 )
                                                {
                                                  if ( *(_WORD *)s1 != 13153 )
                                                  {
                                                    if ( *(_WORD *)s1 != 13409 )
                                                    {
                                                      if ( *(_WORD *)s1 != 13665 )
                                                      {
                                                        if ( *(_WORD *)s1 != 13921 )
                                                        {
                                                          if ( *(_WORD *)s1 != 14177 )
                                                          {
                                                            if ( *(_WORD *)s1 != 12915 )
                                                            {
                                                              if ( *(_WORD *)s1 != 13171 )
                                                              {
                                                                if ( *(_WORD *)s1 != 13427 )
                                                                {
                                                                  if ( *(_WORD *)s1 != 13683 )
                                                                  {
                                                                    if ( *(_WORD *)s1 != 13939 )
                                                                    {
                                                                      if ( *(_WORD *)s1 != 14195 )
                                                                      {
                                                                        if ( *(_WORD *)s1 != 14451 )
                                                                        {
                                                                          if ( *(_WORD *)s1 != 14707 )
                                                                          {
                                                                            if ( *(_WORD *)s1 != 13172 )
                                                                            {
                                                                              if ( *(_WORD *)s1 != 13428 )
                                                                              {
                                                                                if ( *(_WORD *)s1 != 13684 )
                                                                                  return *(_WORD *)s1 == 13940;
                                                                                return 1;
                                                                              }
                                                                              return 1;
                                                                            }
                                                                            return 1;
                                                                          }
                                                                          return 1;
                                                                        }
                                                                        return 1;
                                                                      }
                                                                      return 1;
                                                                    }
                                                                    return 1;
                                                                  }
                                                                  return 1;
                                                                }
                                                                return 1;
                                                              }
                                                              return 1;
                                                            }
                                                            return 1;
                                                          }
                                                          return 1;
                                                        }
                                                        return 1;
                                                      }
                                                      return 1;
                                                    }
                                                    return 1;
                                                  }
                                                  return 1;
                                                }
                                                return 1;
                                              }
                                              return 1;
                                            }
                                            return 1;
                                          }
                                          return 1;
                                        }
                                        return 1;
                                      }
                                      return 1;
                                    }
                                    return 1;
                                  }
                                  return 1;
                                }
                                return 1;
                              }
                              return 1;
                            }
                            return v3;
                          }
                          return 1;
                        }
                        return 1;
                      }
                      return 1;
                    }
                    return 1;
                  }
                  return 1;
                }
                return 1;
              }
              return 1;
            }
            return 1;
          }
          return 1;
        }
        return 1;
      }
      return 1;
    }
    return 1;
  }
  v3 = 1;
  if ( !bcmp(s1, aX10_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX11_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX12_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX13_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX14_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX15_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX16_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX17_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX18_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX19_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX20_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX21_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX22_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX23_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX24_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX25_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX26_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX27_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX28_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX29_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX30_0, 3u) )
    return 1;
  if ( !bcmp(s1, aX31, 3u) )
    return 1;
  if ( !bcmp(s1, aF10, 3u) )
    return 1;
  if ( !bcmp(s1, aF11, 3u) )
    return 1;
  if ( !bcmp(s1, aF12, 3u) )
    return 1;
  if ( !bcmp(s1, aF13, 3u) )
    return 1;
  if ( !bcmp(s1, aF14, 3u) )
    return 1;
  if ( !bcmp(s1, aF15, 3u) )
    return 1;
  if ( !bcmp(s1, aF16, 3u) )
    return 1;
  if ( !bcmp(s1, aF17, 3u) )
    return 1;
  if ( !bcmp(s1, aF18, 3u) )
    return 1;
  if ( !bcmp(s1, aF19, 3u) )
    return 1;
  if ( !bcmp(s1, aF20, 3u) )
    return 1;
  if ( !bcmp(s1, aF21, 3u) )
    return 1;
  if ( !bcmp(s1, aF22, 3u) )
    return 1;
  if ( !bcmp(s1, aF23, 3u) )
    return 1;
  if ( !bcmp(s1, aF24, 3u) )
    return 1;
  if ( !bcmp(s1, aF25, 3u) )
    return 1;
  if ( !bcmp(s1, aF26, 3u) )
    return 1;
  if ( !bcmp(s1, aF27, 3u) )
    return 1;
  if ( !bcmp(s1, aF28, 3u) )
    return 1;
  if ( !bcmp(s1, aF29, 3u) )
    return v3;
  if ( !bcmp(s1, aF30, 3u) )
    return 1;
  if ( bcmp(s1, aF31, 3u) )
  {
    if ( bcmp(s1, aS10, 3u) )
    {
      if ( bcmp(s1, aS11, 3u) )
      {
        if ( !bcmp(s1, aFt0, 3u) )
          return 1;
        if ( !bcmp(s1, aFt1, 3u) )
          return 1;
        if ( !bcmp(s1, aFt2, 3u) )
          return 1;
        if ( !bcmp(s1, aFt3, 3u) )
          return 1;
        if ( !bcmp(s1, aFt4, 3u) )
          return 1;
        if ( !bcmp(s1, aFt5, 3u) )
          return 1;
        if ( !bcmp(s1, aFt6, 3u) )
          return 1;
        if ( !bcmp(s1, aFt7, 3u) )
          return 1;
        if ( !bcmp(s1, aFs0, 3u) )
          return 1;
        if ( !bcmp(s1, aFs1, 3u) )
          return 1;
        if ( bcmp(s1, aFa0, 3u) )
        {
          if ( bcmp(s1, aFa1, 3u) )
          {
            if ( bcmp(s1, aFa2, 3u) )
            {
              if ( bcmp(s1, aFa3, 3u) )
              {
                if ( bcmp(s1, aFa4, 3u) )
                {
                  if ( bcmp(s1, aFa5, 3u) )
                  {
                    if ( bcmp(s1, aFa6, 3u) )
                    {
                      if ( bcmp(s1, aFa7, 3u) )
                      {
                        if ( bcmp(s1, aFs2, 3u) )
                        {
                          if ( bcmp(s1, aFs3, 3u) )
                          {
                            if ( bcmp(s1, aFs4, 3u) )
                            {
                              if ( bcmp(s1, aFs5, 3u) )
                              {
                                if ( bcmp(s1, aFs6, 3u) )
                                {
                                  if ( bcmp(s1, aFs7, 3u) )
                                  {
                                    if ( bcmp(s1, aFs8, 3u) )
                                    {
                                      if ( bcmp(s1, aFs9, 3u) )
                                      {
                                        if ( bcmp(s1, aFt8, 3u) )
                                        {
                                          if ( !bcmp(s1, aFt9, 3u) )
                                            return v3;
                                          return 0;
                                        }
                                        return 1;
                                      }
                                      return 1;
                                    }
                                    return 1;
                                  }
                                  return 1;
                                }
                                return 1;
                              }
                              return 1;
                            }
                            return 1;
                          }
                          return 1;
                        }
                        return 1;
                      }
                      return 1;
                    }
                    return 1;
                  }
                  return 1;
                }
                return 1;
              }
              return 1;
            }
            return 1;
          }
          return 1;
        }
        return 1;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}
