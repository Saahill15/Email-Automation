#include <stdio.h>
#include <ctype.h>

void cyber_quiz() {
    printf("Welcome to the Cybersecurity Quiz Game!\n\n");

    int score = 0;
    char answer;

    // Question 1
    printf("1. What does 'VPN' stand for?\n");
    printf("A. Virtual Private Network\n");
    printf("B. Visual Private Network\n");
    printf("C. Virtual Protected Network\n");
    printf("D. Very Private Network\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Question 2
    printf("\n2. Which of these is NOT a form of malware?\n");
    printf("A. Virus\n");
    printf("B. Worm\n");
    printf("C. Firewall\n");
    printf("D. Trojan\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 3
    printf("\n3. What is phishing?\n");
    printf("A. An online scam to steal sensitive information\n");
    printf("B. A method of encrypting data\n");
    printf("C. A type of firewall\n");
    printf("D. A software to remove viruses\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Question 4
    printf("\n4. What is a strong password?\n");
    printf("A. Only lowercase letters\n");
    printf("B. At least 8 characters with a mix of letters, numbers, and symbols\n");
    printf("C. Your date of birth\n");
    printf("D. Your name repeated twice\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B.\n");
    }

    // Question 5
    printf("\n5. What is two-factor authentication (2FA)?\n");
    printf("A. Using two passwords for one account\n");
    printf("B. A security process requiring two methods to verify identity\n");
    printf("C. Sharing passwords with two people\n");
    printf("D. Logging in twice to access an account\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B.\n");
    }

    // Question 6
    printf("\n6. What does the term 'Zero-Day' mean?\n");
    printf("A. A vulnerability that has been fixed\n");
    printf("B. A software update released after a bug is discovered\n");
    printf("C. A vulnerability that is exploited before it is known or fixed\n");
    printf("D. A tool used to prevent malware from spreading\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 7
    printf("\n7. Which of the following is an example of a DDoS attack?\n");
    printf("A. Phishing\n");
    printf("B. SQL Injection\n");
    printf("C. Overloading a server with traffic\n");
    printf("D. Man-in-the-middle attack\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 8
    printf("\n8. Which protocol is commonly used to encrypt web traffic?\n");
    printf("A. HTTP\n");
    printf("B. FTP\n");
    printf("C. HTTPS\n");
    printf("D. SMTP\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 9
    printf("\n9. What is the purpose of a firewall?\n");
    printf("A. To encrypt messages\n");
    printf("B. To protect against physical theft\n");
    printf("C. To block unauthorized network traffic\n");
    printf("D. To remove malware from the system\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 10
    printf("\n10. What is the most common form of cyber attack in which a hacker intercepts communication between two parties?\n");
    printf("A. Man-in-the-middle attack\n");
    printf("B. Phishing\n");
    printf("C. Ransomware\n");
    printf("D. SQL Injection\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Question 11
    printf("\n11. What does the acronym 'DNS' stand for?\n");
    printf("A. Data Network Security\n");
    printf("B. Domain Name System\n");
    printf("C. Digital Network Service\n");
    printf("D. Dynamic Network Security\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B.\n");
    }

    // Question 12
    printf("\n12. What is encryption?\n");
    printf("A. A method to ensure data is not tampered with\n");
    printf("B. A way to compress data\n");
    printf("C. A process of converting data into a secret code\n");
    printf("D. A way to manage passwords securely\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Question 13
    printf("\n13. What is SQL Injection?\n");
    printf("A. A method to inject code into SQL databases to steal data\n");
    printf("B. A process of injecting malware into websites\n");
    printf("C. An attack that targets user authentication systems\n");
    printf("D. A form of denial-of-service attack\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Question 14
    printf("\n14. Which of the following is a well-known encryption algorithm?\n");
    printf("A. AES\n");
    printf("B. SHA-1\n");
    printf("C. MD5\n");
    printf("D. All of the above\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Question 15
    printf("\n15. What does the term 'social engineering' refer to?\n");
    printf("A. Manipulating people to gain access to confidential information\n");
    printf("B. Developing social networks to protect data\n");
    printf("C. A method of securing communication\n");
    printf("D. Using encryption to protect personal information\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A.\n");
    }

    // Final score
    printf("\nYour final score is: %d/15\n", score);
    if (score == 15) {
        printf("Excellent! You're a Cybersecurity Expert!\n");
    } else if (score >= 10) {
        printf("Great job! Keep learning and improving!\n");
    } else {
        printf("Keep practicing! Cybersecurity is crucial for everyone!\n");
    }
}

int main() {
    cyber_quiz();
    return 0;
}
