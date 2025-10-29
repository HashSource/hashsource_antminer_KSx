int get_total_nonce_rate()
{
  int v0; // r4
  int all_created_runtime; // r0
  int result; // r0
  float v3; // s16
  int v4; // [sp+0h] [bp-Ch] BYREF
  float v5; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v4 = 0;
  all_created_runtime = get_all_created_runtime(&v4);
  result = is_eeprom_loaded(all_created_runtime);
  if ( result && v4 > 0 )
  {
    v3 = 0.0;
    do
    {
      v5 = 0.0;
      result = api_get_eeprom_nonce_response_rate(v0++, &v5);
      if ( !result )
        v3 = v3 + v5;
    }
    while ( v4 > v0 );
  }
  return result;
}
