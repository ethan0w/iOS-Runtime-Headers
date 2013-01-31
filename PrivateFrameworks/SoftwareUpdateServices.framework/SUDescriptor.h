/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUDocumentation, NSString;

@interface SUDescriptor : NSObject <NSCoding, NSCopying> {
    SUDocumentation *_documentation;
    NSString *_publisher;
    NSString *_humanReadableUpdateName;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    unsigned long long _downloadSize;
    unsigned long long _preparationSize;
    unsigned long long _installationSize;
    int _updateType;
    BOOL _autoDownloadAllowableForCellular;
    BOOL _downloadAllowableForCellular;
    BOOL _downloadable;
    BOOL _downloadableOverCellular;
}

@property(retain) SUDocumentation * documentation;
@property(retain) NSString * publisher;
@property(retain) NSString * productSystemName;
@property(retain) NSString * productVersion;
@property(retain) NSString * productBuildVersion;
@property unsigned long long downloadSize;
@property unsigned long long preparationSize;
@property unsigned long long installationSize;
@property int updateType;
@property BOOL autoDownloadAllowableForCellular;
@property(getter=isDownloadable) BOOL downloadable;
@property(getter=isDownloadableOverCellular) BOOL downloadableOverCellular;


- (id)productVersion;
- (void)setDownloadable:(BOOL)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)downloadPolicy;
- (BOOL)isValidDescriptor;
- (unsigned long long)totalRequiredFreeSpace;
- (id)_buildCompareKey;
- (BOOL)_hasValue:(id)arg1;
- (BOOL)isDownloadableOverCellular;
- (BOOL)autoDownloadAllowableForCellular;
- (id)documentation;
- (unsigned long long)installationSize;
- (unsigned long long)preparationSize;
- (id)publisher;
- (id)productSystemName;
- (id)humanReadableUpdateName;
- (void)setDocumentation:(id)arg1;
- (void)setUpdateType:(int)arg1;
- (void)setInstallationSize:(unsigned long long)arg1;
- (void)setPreparationSize:(unsigned long long)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setDownloadableOverCellular:(BOOL)arg1;
- (void)setAutoDownloadAllowableForCellular:(BOOL)arg1;
- (void)setPublisher:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (int)updateType;
- (id)productBuildVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)downloadSize;
- (BOOL)isDownloadable;

@end
