/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStorage : NSObject {
    NSData * archiveData;
    NSBundle * bundle;
    NSString * bundleDirectoryName;
    NSString * bundleResourceName;
    BOOL  captureImplicitLoadingContextOnDecode;
    NSString * identifierForStringsFile;
    BOOL  instantiatingForSimulator;
    UINibDecoder * nibDecoder;
}

@property (nonatomic, copy) NSData *archiveData;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleDirectoryName;
@property (nonatomic, copy) NSString *bundleResourceName;
@property BOOL captureImplicitLoadingContextOnDecode;
@property (nonatomic, copy) NSString *identifierForStringsFile;
@property (nonatomic) BOOL instantiatingForSimulator;
@property (nonatomic, retain) UINibDecoder *nibDecoder;

- (void).cxx_destruct;
- (id)archiveData;
- (id)bundle;
- (id)bundleDirectoryName;
- (id)bundleResourceName;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (id)identifierForStringsFile;
- (BOOL)instantiatingForSimulator;
- (id)nibDecoder;
- (void)setArchiveData:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleDirectoryName:(id)arg1;
- (void)setBundleResourceName:(id)arg1;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1;
- (void)setIdentifierForStringsFile:(id)arg1;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (void)setNibDecoder:(id)arg1;

@end
