/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryStoreMigrationResult : NSObject {
    long long  _endingSchemaVersion;
    BOOL  _requiresExtensionDisablement;
    BOOL  _requiresExtensionSynchronization;
    long long  _startingSchemaVersion;
}

@property (nonatomic) long long endingSchemaVersion;
@property (nonatomic) BOOL requiresExtensionDisablement;
@property (nonatomic) BOOL requiresExtensionSynchronization;
@property (nonatomic) long long startingSchemaVersion;

- (long long)endingSchemaVersion;
- (BOOL)requiresExtensionDisablement;
- (BOOL)requiresExtensionSynchronization;
- (void)setEndingSchemaVersion:(long long)arg1;
- (void)setRequiresExtensionDisablement:(BOOL)arg1;
- (void)setRequiresExtensionSynchronization:(BOOL)arg1;
- (void)setStartingSchemaVersion:(long long)arg1;
- (long long)startingSchemaVersion;

@end
