/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInfo : NSObject <NSCoding, NSCopying> {
    int  _copies;
    int  _duplex;
    BOOL  _imagePDFAnnotations;
    NSString * _jobAccountID;
    NSString * _jobName;
    int  _orientation;
    int  _outputType;
    NSString * _pdfPassword;
    NSString * _printerID;
    BOOL  _punch;
    BOOL  _scaleUp;
    BOOL  _staple;
}

@property (nonatomic) int copies;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int duplex;
@property (nonatomic) BOOL imagePDFAnnotations;
@property (nonatomic, retain) NSString *jobAccountID;
@property (nonatomic, copy) NSString *jobName;
@property (nonatomic) int orientation;
@property (nonatomic) int outputType;
@property (nonatomic, retain) NSString *pdfPassword;
@property (nonatomic, copy) NSString *printerID;
@property (nonatomic) BOOL punch;
@property (nonatomic) BOOL scaleUp;
@property (nonatomic) BOOL staple;

+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_createPrintSettingsForPrinter:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (int)copies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)duplex;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)imagePDFAnnotations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobAccountID;
- (id)jobName;
- (int)orientation;
- (int)outputType;
- (id)pdfPassword;
- (id)printerID;
- (BOOL)punch;
- (BOOL)scaleUp;
- (void)setCopies:(int)arg1;
- (void)setDuplex:(int)arg1;
- (void)setImagePDFAnnotations:(BOOL)arg1;
- (void)setJobAccountID:(id)arg1;
- (void)setJobName:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputType:(int)arg1;
- (void)setPdfPassword:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setPunch:(BOOL)arg1;
- (void)setScaleUp:(BOOL)arg1;
- (void)setStaple:(BOOL)arg1;
- (BOOL)staple;

@end
