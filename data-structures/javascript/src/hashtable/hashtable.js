class HashTable {
  construct() {
    this.table = {}
  }

  insert(index, item) {
    table[index] = item
  }

  delete(index) {
    Reflect.deleteProperty(table, index)
  }

  update(index, item) {
    table[index] = item
  }

  get(index) {
    return table[index]
  }

  getTable() {
    return table
  }
}

function newHash() {
  return new HashTable
}

let table = newHash()

table.insert(1, "first")
table.insert(2, "first")
table.insert(3, "first")
table.insert(4, "first")
table.insert(5, "first")
table.insert(6, "first")
table.insert(7, "first")

console.log(table.getTable())

console.log(table.get(3))
table.delete(3)
console.log(table.get(3))

table.update(2, "second")
console.log(table.get(2))

console.log(table.getTable())
