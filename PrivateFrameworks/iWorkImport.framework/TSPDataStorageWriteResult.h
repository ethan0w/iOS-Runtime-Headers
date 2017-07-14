/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataStorageWriteResult : NSObject {
    BOOL  _didCopyDataToPackage;
    <TSPCryptoInfo> * _encryptionInfo;
    NSString * _filename;
    BOOL  _isMissingData;
}

@property (nonatomic, readonly) BOOL didCopyDataToPackage;
@property (nonatomic, readonly) <TSPCryptoInfo> *encryptionInfo;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) BOOL isMissingData;

- (void).cxx_destruct;
- (BOOL)didCopyDataToPackage;
- (id)encryptionInfo;
- (id)filename;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(BOOL)arg3 isMissingData:(BOOL)arg4;
- (BOOL)isMissingData;

@end
