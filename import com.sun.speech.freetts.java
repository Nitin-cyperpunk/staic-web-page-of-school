import com.sun.speech.freetts.Voice;
import com.sun.speech.freetts.VoiceManager;

public class TextToSpeech {
    public static void main(String[] args) {
        // Initialize the VoiceManager
        VoiceManager voiceManager = VoiceManager.getInstance();

        // Select a voice from available voices
        Voice voice = voiceManager.getVoice("kevin16");

        if (voice == null) {
            System.err.println("No voice named kevin16 found.");
            System.exit(1);
        }

        // Allocate the resources for the voice
        voice.allocate();

        // The text to be converted to speech
        String text = "Hello, this is a simple text-to-speech example in Java.";

        // Speak the text
        voice.speak(text);

        // Deallocate the voice resources
        voice.deallocate();
    }
}
