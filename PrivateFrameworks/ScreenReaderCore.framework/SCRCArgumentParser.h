/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCArgumentSubcommand, NSMutableArray, NSString;

@interface SCRCArgumentParser : SCRCArgumentSubcommand  {
    int _argc;
    char **_argv;
    NSMutableArray *_subcommandArray;
    NSMutableArray *_argumentArray;
    NSString *_appName;
    SCRCArgumentSubcommand *_subcommand;
    BOOL _isLaunchedAtLogin;
}

+ (id)versionString;
+ (id)commandPath;
+ (id)processIdentifier;

- (void)dealloc;
- (id)setRunningAtStartup:(id)arg1;
- (void)addSubcommand:(id)arg1;
- (BOOL)isLaunchedAtLogin;
- (int)argc;
- (id)_displayVersion:(id)arg1;
- (char **)argv;
- (id)_displayHelp:(id)arg1;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (void)stop;
- (int)run;
- (void)setAppName:(id)arg1;
- (id)appName;
- (BOOL)parse;

@end
