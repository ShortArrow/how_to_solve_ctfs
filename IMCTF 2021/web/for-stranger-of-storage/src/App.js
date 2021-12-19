import woodyImage from './santa-claus-woody.jpg';
import isMobile from 'ismobilejs';

function App() {
  localStorage.setItem('woody says', ["54","47","56","30","49","47","31","6c","49","48","52","6c","62","47","77","67","65","57","39","31","49","47","46","69","62","33","56","30","49","48","52","6f","5a","53","42","7a","64","48","4a","68","62","6d","64","6c","49","48","52","6f","61","57","35","6e","63","79","42","68","63","6d","55","67","61","47","46","77","63","47","56","75","61","57","34","6e","49","48","52","76","49","47","31","6c","43","6c","4e","30","63","6d","46","75","5a","32","55","67","64","47","68","70","62","6d","64","7a","43","6d","6c","74","59","33","52","6d","65","33","4e","30","63","6d","46","75","5a","32","56","66","64","47","68","70","62","6d","64","7a","58","32","46","79","5a","56","39","6f","59","58","42","77","5a","57","35","70","62","69","64","66","64","47","39","66","62","57","56","39","43","6b","46","70","62","69","64","30","49","47","35","76","49","47","52","76","64","57","4a","30","49","47","46","69","62","33","56","30","49","47","6c","30"]);
  return (
    <div className="App" style={{
      margin: 0, padding: 0,
      height: "100%", width: "100%",
      display: "flex", flexDirection: "column", textAlign: 'center',
      fontFamily: "-apple-system, BlinkMacSystemFont, 'Segoe UI', 'Roboto', 'Oxygen', 'Ubuntu', 'Cantarell', 'Fira Sans', 'Droid Sans', 'Helvetica Neue', sans-serif",
    }}>
      <header className="App-header" style={{
        backgroundColor: '#282c34', minHeight: '10vh', display: 'flex',
        flexDirection: 'column', alignItems: 'center', justifyContent: 'center',
        flexShrink: 0,
        fontSize: 'calc(10px + 2vmin)', color: 'white',
      }}>
        For stranger of storage
      </header>
      <main style={{ flexGrow: 1 }}>
        <h1>Oh, No!</h1>
        <img src={woodyImage} style={{
          maxHeight: isMobile ? undefined : "10vh",
          maxWidth: isMobile ? "90vw" : undefined,
          borderRadius: "0.2pc"
        }} alt=""></img>
      </main>
      <footer style={{
        backgroundColor: '#282c34', minHeight: '10vh', display: 'flex',
        flexDirection: 'column', alignItems: 'center', justifyContent: 'center',
        flexShrink: 0,
        fontSize: 'calc(10px + 2vmin)', color: 'white',
      }}>
        Iron Maiden CTF
      </footer>
    </div >
  );
}

export default App;
