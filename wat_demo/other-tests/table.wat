(module
  (func $thirteen (result i32) (i32.const 13))
  (func $fourtytwo (result i64) (i64.const 999999999))
  (table (export "tbl") funcref (elem $thirteen $fourtytwo))
)