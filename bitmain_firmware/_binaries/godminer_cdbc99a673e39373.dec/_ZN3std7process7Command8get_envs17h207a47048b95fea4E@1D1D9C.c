int *__fastcall std::process::Command::get_envs(int *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  if ( !v3 )
    v4 = 0;
  result[8] = v4;
  v5 = 2 * (v3 == 0);
  result[4] = v5;
  result[5] = v2;
  result[6] = v3;
  *result = v5;
  result[1] = v2;
  result[2] = v3;
  return result;
}
