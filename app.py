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
    sender_password = "rayp wkfb nqkn ypel"  # Replace with your email password
    subject = "Your Cybersecurity Quiz Game File"
    body = "Hi there!\n\nHere's the Cybersecurity Quiz Game file you requested. Enjoy learning cybersecurity!\n\nBest regards, Cyber Quiz Team"

    # Create the email
    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = subject
    msg.attach(MIMEText(body, 'plain'))

    # Attach the .exe file
    filename = "cyber_quiz.zip"  # Replace with the actual file name
    filepath = os.path.join(os.getcwd(), filename)  # Ensure the file path is correct

    try:
        with open(filepath, "rb") as attachment:
            part = MIMEBase("application", "octet-stream")
            part.set_payload(attachment.read())
            encoders.encode_base64(part)  # Encode the file content
            part.add_header(
                "Content-Disposition",
                f"attachment; filename={filename}",
            )
            msg.attach(part)
            print(f"File attached: {filename}")
    except FileNotFoundError:
        print(f"Error: The file {filename} was not found.")
        return
    except Exception as e:
        print(f"Error attaching the file: {e}")
        return

    # Send the email
    try:
        with smtplib.SMTP("smtp.gmail.com", 587) as server:
            server.starttls()
            server.login(sender_email, sender_password)
            server.send_message(msg)
            print(f"Email sent to {recipient_email}")
    except Exception as e:
        print(f"Failed to send email: {e}")

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        email = request.form['email']
        send_email(email)
        return "✅ File sent successfully! Check your email."
    return render_template('index.html')

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
