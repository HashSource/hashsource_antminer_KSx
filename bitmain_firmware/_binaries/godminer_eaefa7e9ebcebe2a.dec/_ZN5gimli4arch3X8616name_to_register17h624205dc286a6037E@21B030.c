bool __fastcall gimli::arch::X86::name_to_register(_WORD *s1, size_t n)
{
  _BOOL4 result; // r0
  _BOOL4 v5; // r4

  switch ( n )
  {
    case 2u:
      switch ( *s1 )
      {
        case 0x4152:
          result = 1;
          break;
        case 0x7365:
          result = 1;
          break;
        case 0x7363:
          result = 1;
          break;
        case 0x7373:
          result = 1;
          break;
        case 0x7364:
          result = 1;
          break;
        case 0x7366:
          result = 1;
          break;
        case 0x7367:
          result = 1;
          break;
        case 0x7274:
          result = 1;
          break;
        default:
          goto LABEL_47;
      }
      break;
    case 3u:
      if ( bcmp(s1, aEax, 3u) )
      {
        v5 = 1;
        if ( bcmp(s1, aEcx, 3u) )
        {
          if ( bcmp(s1, aEdx, 3u) )
          {
            if ( !bcmp(s1, aEbx, 3u) )
              goto LABEL_48;
            if ( bcmp(s1, aEsp, 3u) )
            {
              if ( bcmp(s1, aEbp, 3u) )
              {
                if ( bcmp(s1, aEsi, 3u) )
                {
                  if ( bcmp(s1, aEdi, 3u) )
                  {
                    if ( bcmp(s1, aSt0, 3u) )
                    {
                      if ( bcmp(s1, aSt1, 3u) )
                      {
                        if ( bcmp(s1, aSt2, 3u) )
                        {
                          if ( bcmp(s1, aSt3, 3u) )
                          {
                            if ( bcmp(s1, aSt4, 3u) )
                            {
                              if ( bcmp(s1, aSt5, 3u) )
                              {
                                if ( bcmp(s1, aSt6, 3u) )
                                {
                                  if ( bcmp(s1, aSt7, 3u) )
                                  {
                                    if ( bcmp(s1, aMm0, 3u) )
                                    {
                                      if ( bcmp(s1, aMm1, 3u) )
                                      {
                                        if ( bcmp(s1, aMm2, 3u) )
                                        {
                                          if ( bcmp(s1, aMm3, 3u) )
                                          {
                                            if ( bcmp(s1, aMm4, 3u) )
                                            {
                                              if ( bcmp(s1, aMm5, 3u) )
                                              {
                                                if ( bcmp(s1, aMm6, 3u) )
                                                {
                                                  if ( bcmp(s1, aMm7, 3u) )
                                                    goto LABEL_47;
                                                  result = 1;
                                                }
                                                else
                                                {
                                                  result = 1;
                                                }
                                              }
                                              else
                                              {
                                                result = 1;
                                              }
                                            }
                                            else
                                            {
                                              result = 1;
                                            }
                                          }
                                          else
                                          {
                                            result = 1;
                                          }
                                        }
                                        else
                                        {
                                          result = 1;
                                        }
                                      }
                                      else
                                      {
                                        result = 1;
                                      }
                                    }
                                    else
                                    {
                                      result = 1;
                                    }
                                  }
                                  else
                                  {
                                    result = 1;
                                  }
                                }
                                else
                                {
                                  result = 1;
                                }
                              }
                              else
                              {
                                result = 1;
                              }
                            }
                            else
                            {
                              result = 1;
                            }
                          }
                          else
                          {
                            result = 1;
                          }
                        }
                        else
                        {
                          result = 1;
                        }
                      }
                      else
                      {
                        result = 1;
                      }
                    }
                    else
                    {
                      result = 1;
                    }
                  }
                  else
                  {
                    result = 1;
                  }
                }
                else
                {
                  result = 1;
                }
              }
              else
              {
                result = 1;
              }
            }
            else
            {
              result = 1;
            }
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
      break;
    case 4u:
      switch ( *(_DWORD *)s1 )
      {
        case 0x306D6D78:
          result = 1;
          break;
        case 0x316D6D78:
          result = 1;
          break;
        case 0x326D6D78:
          result = 1;
          break;
        case 0x336D6D78:
          result = 1;
          break;
        case 0x346D6D78:
          result = 1;
          break;
        case 0x356D6D78:
          result = 1;
          break;
        case 0x366D6D78:
          result = 1;
          break;
        case 0x376D6D78:
          result = 1;
          break;
        case 0x7274646C:
          result = 1;
          break;
        default:
          goto LABEL_47;
      }
      break;
    case 5u:
      if ( bcmp(s1, aMxcsr, 5u) )
        goto LABEL_47;
      result = 1;
      break;
    case 7u:
      if ( bcmp(s1, aFsBase, n) )
        result = bcmp(s1, aGsBase, n) == 0;
      else
        result = 1;
      break;
    default:
LABEL_47:
      v5 = 0;
LABEL_48:
      result = v5;
      break;
  }
  return result;
}
