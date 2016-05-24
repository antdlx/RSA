package antdlx.com.rsa;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Base64;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.security.PrivateKey;
import java.security.PublicKey;

public class MainActivity extends AppCompatActivity {

    Button btna,btnb;
    TextView tvEnrypted,tvDecrypted;
    EditText et_input;
    RSAHelper rsaHelper;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        init();
    }

    private void init() {

        rsaHelper = new RSAHelper();

        et_input = (EditText) findViewById(R.id.et_input);
        btna = (Button) findViewById(R.id.btn_1);
        btnb = (Button) findViewById(R.id.btn_2);
        tvEnrypted = (TextView) findViewById(R.id.tv_encrypted);
        tvDecrypted = (TextView) findViewById(R.id.tv_decrypted);

        //A发给B，则A应用B的公钥加密，B用自己的公钥解密
        btna.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                try {
                    //生成加密后的文本
                    String input = et_input.getText().toString().trim();
                    PublicKey publicKey = rsaHelper.loadPublicKey(rsaHelper.GetBPublicKey());
                    byte[] encryptedStr = rsaHelper.encryptData(input.getBytes(),publicKey);
                    //为了方便展示，我们使用Base64编码一下加密后的文本，否则视乱码
                    byte[] encryptedStrx = Base64.encode(encryptedStr,Base64.DEFAULT);
                    String result = new String(encryptedStrx);
                    tvEnrypted.setText(result);

                    //生成解密后的文本
                    PrivateKey privateKey = rsaHelper.loadPrivateKey(rsaHelper.GetBPrivateKey());
                    byte [] decrypted = rsaHelper.decryptData(encryptedStr,privateKey);
                    String result2 = new String(decrypted);
                    tvDecrypted.setText(result2);

                } catch (Exception e) {
                    e.printStackTrace();
                }

            }
        });


        //B发给A，则B应用A的公钥加密，A用自己的公钥解密
        btnb.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                try {
                    //生成加密后的文本
                    String input = et_input.getText().toString().trim();
                    PublicKey publicKey = rsaHelper.loadPublicKey(rsaHelper.GetAPublicKey());
                    byte[] encryptedStr = rsaHelper.encryptData(input.getBytes(),publicKey);
                    //为了方便展示，我们使用Base64编码一下加密后的文本，否则视乱码
                    byte[] encryptedStrx = Base64.encode(encryptedStr,Base64.DEFAULT);
                    String result = new String(encryptedStrx);
                    tvEnrypted.setText(result);

                    //生成解密后的文本
                    PrivateKey privateKey = rsaHelper.loadPrivateKey(rsaHelper.GetAPrivateKey());
                    byte [] decrypted = rsaHelper.decryptData(encryptedStr,privateKey);
                    String result2 = new String(decrypted);
                    tvDecrypted.setText(result2);

                } catch (Exception e) {
                    e.printStackTrace();
                }

            }
        });
    }

}
