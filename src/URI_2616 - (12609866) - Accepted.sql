SELECT customers.id, customers.name FROM customers WHERE customers.id NOT IN 
	(SELECT locations.id_customers FROM locations);