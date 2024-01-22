import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, TextInput, TouchableOpacity, Image } from 'react-native';

export default function App() {
    return ( <
        View style = { styles.container } >
        <
        Text style = { styles.login } > Login < /Text>

        <
        TextInput style = { styles.input }
        placeholder = "Email"
        underlineColorAndroid = { 'transparent' } > < /TextInput> <
        TextInput style = { styles.input }
        placeholder = "Password"
        secureTextEntry = { true }
        underlineColorAndroid = { 'transparent' } > < /TextInput>

        <
        TouchableOpacity style = { styles.button } >
        <
        Text style = { styles.btnText } > Sign in < /Text> <
        /TouchableOpacity> <
        /View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        paddingLeft: 60,
        paddingRight: 60,
        justifyContent: 'center',
        alignSelf: 'stretch',
    },
    login: {
        fontSize: 28,
        color: '#f8f8f8',
        paddingBottom: 10,
        marginBottom: 40,
        marginRight: 250,
        borderBottomColor: '#6fa832',
        borderBottomWidth: 1,
    },
    input: {
        alignSelf: 'stretch',
        height: 40,
        marginBottom: 30,
        color: "#fff",
        borderBottomColor: "#f8f8f8",
        borderBottomWidth: 1
    },
    button: {
        alignSelf: 'stretch',
        alignItems: 'center',
        padding: 20,
        backgroundColor: "#42f59e",
        marginTop: 30,
        borderRadius: 5
    },
    btnText: {
        color: '#fff',
        fontWeight: 'bold'
    }
});