/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIUserApi_H
#define OAI_OAIUserApi_H

#include "OAIHttpRequest.h"

#include "OAIUser.h"
#include <QList>
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIUserApi: public QObject {
    Q_OBJECT

public:
    OAIUserApi();
    OAIUserApi(const QString& host, const QString& basePath);
    ~OAIUserApi();

    void setBasePath(const QString& basePath);
    void setHost(const QString& host);
    void addHeaders(const QString& key, const QString& value);
    
    void createUser(const OAIUser& body);
    void createUsersWithArrayInput(const QList<OAIUser>& body);
    void createUsersWithListInput(const QList<OAIUser>& body);
    void deleteUser(const QString& username);
    void getUserByName(const QString& username);
    void loginUser(const QString& username, const QString& password);
    void logoutUser();
    void updateUser(const QString& username, const OAIUser& body);
    
private:
    QString basePath;
    QString host;
    QMap<QString, QString> defaultHeaders;
    void createUserCallback (OAIHttpRequestWorker * worker);
    void createUsersWithArrayInputCallback (OAIHttpRequestWorker * worker);
    void createUsersWithListInputCallback (OAIHttpRequestWorker * worker);
    void deleteUserCallback (OAIHttpRequestWorker * worker);
    void getUserByNameCallback (OAIHttpRequestWorker * worker);
    void loginUserCallback (OAIHttpRequestWorker * worker);
    void logoutUserCallback (OAIHttpRequestWorker * worker);
    void updateUserCallback (OAIHttpRequestWorker * worker);
    
signals:
    void createUserSignal();
    void createUsersWithArrayInputSignal();
    void createUsersWithListInputSignal();
    void deleteUserSignal();
    void getUserByNameSignal(OAIUser summary);
    void loginUserSignal(QString summary);
    void logoutUserSignal();
    void updateUserSignal();
    
    void createUserSignalFull(OAIHttpRequestWorker* worker);
    void createUsersWithArrayInputSignalFull(OAIHttpRequestWorker* worker);
    void createUsersWithListInputSignalFull(OAIHttpRequestWorker* worker);
    void deleteUserSignalFull(OAIHttpRequestWorker* worker);
    void getUserByNameSignalFull(OAIHttpRequestWorker* worker, OAIUser summary);
    void loginUserSignalFull(OAIHttpRequestWorker* worker, QString summary);
    void logoutUserSignalFull(OAIHttpRequestWorker* worker);
    void updateUserSignalFull(OAIHttpRequestWorker* worker);
    
    void createUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithArrayInputSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithListInputSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getUserByNameSignalE(OAIUser summary, QNetworkReply::NetworkError error_type, QString error_str);
    void loginUserSignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void logoutUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    
    void createUserSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithArrayInputSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithListInputSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserByNameSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loginUserSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void logoutUserSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    
};

}
#endif
