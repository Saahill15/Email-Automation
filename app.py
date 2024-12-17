from flask import Flask, request, render_template
import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders
import os

app = Flask(__name__)

# Email sending function
def send_email(recipient_email):
    sender_email = "writetosahilkhan@gmail.com"  # Replace with your email
    sender_password = "rayp wkfb nqkn ypel"  # Replace with your app password
    subject = "Your Cybersecurity Quiz Game File"
    body = "Hi there!\n\nHere's the Cybersecurity Quiz Game file you requested. Enjoy learning cybersecurity!\n\nBest regards, Cyber Quiz Team"

    # Create the email
    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = subject
    msg.attach(MIMEText(body, 'plain'))

    # File to be attached
    filename = "cyber_quiz.exe"  # Replace with the actual file name
    filepath = os.path.join(os.getcwd(), filename)

    try:
        # Check if file exists
        if not os.path.isfile(filepath):
            print(f"Error: File {filename} does not exist at path {filepath}")
            return "File not found"

        # Attach the file
        with open(filepath, "rb") as attachment:
            part = MIMEBase("application", "octet-stream")
            part.set_payload(attachment.read())
            encoders.encode_base64(part)
            part.add_header(
                "Content-Disposition",
                f"attachment; filename={filename}",
            )
            msg.attach(part)
            print(f"File attached successfully: {filename}")
    except Exception as e:
        print(f"Error attaching file: {e}")
        return f"Attachment error: {e}"

    # Send the email
    try:
        with smtplib.SMTP("smtp.gmail.com", 587) as server:
            server.starttls()
            server.login(sender_email, sender_password)
            server.send_message(msg)
            print(f"Email sent successfully to {recipient_email}")
            return "Email sent"
    except Exception as e:
        print(f"Failed to send email: {e}")
        return f"Email error: {e}"

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        email = request.form['email']
        print(f"Email received: {email}")
        result = send_email(email)
        return f"✅ {result}"
    return render_template('index.html')

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
