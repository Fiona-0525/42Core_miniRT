pipeline {
    agent any
    
    stages {
        stage('Checkout') {
            steps {
                echo 'Cloning repository...'
            }
        }
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                sh 'make test'
            }
        }
    }
    
    post {
        success {
            echo 'Build successful! ✅'
        }
        failure {
            echo 'Build failed! ❌'
        }
    }
}
