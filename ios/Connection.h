
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNConnectionSpec.h"

@interface Connection : NSObject <NativeConnectionSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Connection : NSObject <RCTBridgeModule>
#endif

@end
