var client = new HttpClient();
var request = new HttpRequestMessage();
request.RequestUri = new Uri("http://localhost:3000/api/tasks");
request.Method = HttpMethod.Post;

request.Headers.Add("Accept", "*/*");
request.Headers.Add("User-Agent", "Thunder Client (https://www.thunderclient.com)");

var bodyString = "{\r  \"title\": \"Estudiar para el parcial\",\r  \"description\": \"Leer apuntes de desarrollo\",\r  \"dueDate\": \"2025-10-20T23:59:00.000Z\"\r}\r";
var content = new StringContent(bodyString, Encoding.UTF8, "application/json");
request.Content = content;

var response = await client.SendAsync(request);
var result = await response.Content.ReadAsStringAsync();
Console.WriteLine(result);